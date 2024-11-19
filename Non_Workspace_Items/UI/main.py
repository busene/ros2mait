#!/usr/bin/python3
import tkinter
import customtkinter as ctk

class App(ctk.CTk):
    def __init__(self):
        super().__init__()

        self.title("Enhanced Text Processor")
        self.geometry("500x400")
        self.configure(fg_color="#2C3E50")  # Dark blue-gray background

        # Set the color theme
        ctk.set_appearance_mode("dark")
        ctk.set_default_color_theme("blue")

        # Input field
        self.input_field = ctk.CTkEntry(self, width=300, height=40, 
                                        placeholder_text="Type here...",
                                        font=("Arial", 14))
        self.input_field.pack(pady=20)

        # Output label
        self.output_label = ctk.CTkLabel(self, text="Output will appear here", 
                                         font=("Arial", 16), text_color="#ECF0F1",
                                         wraplength=400)  # Allow text wrapping
        self.output_label.pack(pady=20)

        # Button frame
        self.button_frame = ctk.CTkFrame(self, fg_color="transparent")
        self.button_frame.pack(pady=10)

        # Real-time mode button
        self.realtime_button = ctk.CTkButton(self.button_frame, text="Real-time Mode", 
                                             command=self.toggle_realtime_mode,
                                             fg_color="#27AE60", hover_color="#2ECC71")
        self.realtime_button.pack(side="left", padx=10)

        # Manual mode button
        self.manual_button = ctk.CTkButton(self.button_frame, text="Manual Mode", 
                                           command=self.toggle_manual_mode,
                                           fg_color="#E74C3C", hover_color="#C0392B")
        self.manual_button.pack(side="left", padx=10)

        # Send button (initially hidden)
        self.send_button = ctk.CTkButton(self, text="Send", command=self.send_text,
                                         fg_color="#3498DB", hover_color="#2980B9")
        self.send_button.pack(pady=10)
        self.send_button.pack_forget()  # Hide initially

        # Clear button
        self.clear_button = ctk.CTkButton(self, text="Clear", command=self.clear_text,
                                          fg_color="#95A5A6", hover_color="#7F8C8D")
        self.clear_button.pack(pady=10)

        # Set initial mode to real-time
        self.realtime_mode = True
        self.input_field.bind("<KeyRelease>", self.update_output)

    def toggle_realtime_mode(self):
        self.realtime_mode = True
        self.input_field.bind("<KeyRelease>", self.update_output)
        self.send_button.pack_forget()
        self.realtime_button.configure(fg_color="#27AE60")
        self.manual_button.configure(fg_color="#E74C3C")

    def toggle_manual_mode(self):
        self.realtime_mode = False
        self.input_field.unbind("<KeyRelease>")
        self.send_button.pack(pady=10)
        self.manual_button.configure(fg_color="#27AE60")
        self.realtime_button.configure(fg_color="#E74C3C")

    def update_output(self, event=None):
        if self.realtime_mode:
            input_text = self.input_field.get()
            processed_text = self.process_text(input_text)
            self.output_label.configure(text=processed_text)

    def send_text(self):
        input_text = self.input_field.get()
        processed_text = self.process_text(input_text)
        self.output_label.configure(text=processed_text)

    def process_text(self, text):
        # This is where you can add your text processing logic
        # For this example, we'll convert the text to uppercase and add some formatting
        return f"Processed: {text.upper()}"

    def clear_text(self):
        self.input_field.delete(0, 'end')
        self.output_label.configure(text="Output will appear here")

if __name__ == "__main__":
    app = App()
    app.mainloop()
