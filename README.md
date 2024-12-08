# Phone Book Management System

This project is a **Phone Book Management System** implemented in C++. It allows users to store, search, and manage contact information such as names, phone numbers, and addresses. The system utilizes file operations for data persistence, ensuring that contact details are stored even after the program exits.

---

## Features

1. **Add New Contacts**:
   - Store a contact with a name, phone number, and address.
   - Data is saved to a text file (`PhoneBook.txt`) for persistent storage.

2. **Search for Contacts**:
   - Search for a contact by name.
   - Displays contact details if found, or notifies the user if the contact doesn't exist.

3. **File-Based Data Management**:
   - Uses a file (`PhoneBook.txt`) for storing and retrieving contact information.

4. **User-Friendly Interface**:
   - A menu-driven system with clear prompts for easy navigation.

---

## Prerequisites

- **C++ Compiler**: Ensure you have a C++ compiler installed, such as GCC or MSVC.
- **Windows OS**: The program uses the `windows.h` library for system-specific commands like `Sleep()` and `cls`.

---

## How to Run the Program

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/yourusername/phonebook-management.git
