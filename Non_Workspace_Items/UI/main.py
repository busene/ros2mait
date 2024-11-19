#!/usr/bin/python3
import tkinter
import customtkinter as ctk
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import threading

class ROSPublisher(Node):
    def __init__(self):
        super().__init__('gui_publisher')
        self.publisher_ = self.create_publisher(String, 'typed_text', 10)

    def publish_text(self, text):
        msg = String()
        msg.data = text
        current_time = self.get_clock().now()
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: "{msg.data}" at {current_time.nanoseconds / 1e9:.6f} seconds')

class App(ctk.CTk):
    def __init__(self):
        super().__init__()

        self.title("ROS 2 Letter Publisher")
        self.geometry("500x400")
        self.configure(fg_color="#2C3E50")

        ctk.set_appearance_mode("dark")
        ctk.set_default_color_theme("blue")

        self.input_field = ctk.CTkEntry(self, width=300, height=40, 
                                        placeholder_text="Type here...",
                                        font=("Arial", 14))
        self.input_field.pack(pady=20)

        self.output_label = ctk.CTkLabel(self, text="Output will appear here", 
                                         font=("Arial", 16), text_color="#ECF0F1",
                                         wraplength=400)
        self.output_label.pack(pady=20)

        self.button_frame = ctk.CTkFrame(self, fg_color="transparent")
        self.button_frame.pack(pady=10)

        self.realtime_button = ctk.CTkButton(self.button_frame, text="Real-time Mode", 
                                             command=self.toggle_realtime_mode,
                                             fg_color="#27AE60", hover_color="#2ECC71")
        self.realtime_button.pack(side="left", padx=10)

        self.manual_button = ctk.CTkButton(self.button_frame, text="Manual Mode", 
                                           command=self.toggle_manual_mode,
                                           fg_color="#E74C3C", hover_color="#C0392B")
        self.manual_button.pack(side="left", padx=10)

        self.send_button = ctk.CTkButton(self, text="Send", command=self.send_text,
                                         fg_color="#3498DB", hover_color="#2980B9")
        self.send_button.pack(pady=10)
        self.send_button.pack_forget()

        self.clear_button = ctk.CTkButton(self, text="Clear", command=self.clear_text,
                                          fg_color="#95A5A6", hover_color="#7F8C8D")
        self.clear_button.pack(pady=10)

        # Initialize ROS 2
        rclpy.init()
        self.ros_publisher = ROSPublisher()
        self.ros_thread = threading.Thread(target=self.ros_spin, daemon=True)
        self.ros_thread.start()

        self.realtime_mode = True
        self.toggle_realtime_mode()

    def ros_spin(self):
        rclpy.spin(self.ros_publisher)

    def toggle_realtime_mode(self):
        self.realtime_mode = True
        self.input_field.bind("<Key>", self.on_key_press)
        self.send_button.pack_forget()
        self.realtime_button.configure(fg_color="#27AE60")
        self.manual_button.configure(fg_color="#E74C3C")

    def toggle_manual_mode(self):
        self.realtime_mode = False
        self.input_field.unbind("<Key>")
        self.send_button.pack(pady=10)
        self.manual_button.configure(fg_color="#27AE60")
        self.realtime_button.configure(fg_color="#E74C3C")

    def on_key_press(self, event):
        if self.realtime_mode:
            if len(event.char) == 1 and event.char.isprintable():
                self.process_and_publish(event.char)
            elif event.keysym == 'BackSpace':
                self.process_and_publish('BackSpace')
            elif event.keysym == 'space':
                self.process_and_publish(' ')
        self.update_output()

    def send_text(self):
        current_text = self.input_field.get()
        for char in current_text:
            self.process_and_publish(char)
        self.update_output()

    def process_and_publish(self, char):
        self.ros_publisher.publish_text(char)

    def update_output(self):
        current_text = self.input_field.get()
        self.output_label.configure(text=f"Current text: {current_text}")

    def clear_text(self):
        self.input_field.delete(0, 'end')
        self.output_label.configure(text="Output will appear here")

    def on_closing(self):
        rclpy.shutdown()
        self.quit()

if __name__ == "__main__":
    app = App()
    app.protocol("WM_DELETE_WINDOW", app.on_closing)
    app.mainloop()
