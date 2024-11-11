#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <ncurses.h>
#include <string>

// benodigde packages

class LetterInputNode : public rclcpp::Node
{
public:
    LetterInputNode() : Node("letter_input_node")
    {
        publisher_ = this->create_publisher<std_msgs::msg::String>("letter_command", 10);
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(100),
            std::bind(&LetterInputNode::timer_callback, this));

        // Initialize ncurses
        initscr();
        cbreak();
        noecho();
        keypad(stdscr, TRUE);
        nodelay(stdscr, TRUE);
        
        printw("Enter letters (use Ctrl+C to quit):\n");
        refresh();
    }

    ~LetterInputNode()
    {
        // Clean up ncurses
        endwin();
    }

private:
    void timer_callback()
    {
        int ch = getch();
        if (ch != ERR)
        {
            if (std::isalnum(ch) || ch == ' ')
            {
                auto message = std_msgs::msg::String();
                message.data = std::string(1, static_cast<char>(ch));
                publisher_->publish(message);
                RCLCPP_INFO(this->get_logger(), "Published character: '%s'", message.data.c_str());
                
                // Display the pressed key
                printw("%c", ch);
                refresh();
            }
        }
    }

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<LetterInputNode>());
    rclcpp::shutdown();
    return 0;
}