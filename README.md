# Store Management System (C++)

A lightweight, interactive console application written in C++ designed for warehouse inventory tracking. This project demonstrates core procedural programming concepts, including functional decomposition, array manipulation, and robust user input validation.

## 🚀 Features

* **Show Inventory:** Displays the current stock level for all products in a clean, user-friendly format.
* **Find Maximum Stock:** Automatically scans the inventory and identifies the highest stock level.
* **Find Minimum Stock:** Scans the inventory to find the lowest stock level (useful for identifying items that need restocking).
* **Update Stock:** Allows dynamic modification of stock levels for specific products with built-in boundary validation (prevents out-of-bounds array errors).
* **Interactive Menu:** Features a continuous loop interface with a custom-built "Press Enter to continue" pause mechanism for optimal readability.

## 🛠️ Concepts Demonstrated

* **Functional Decomposition:** Separating business logic (`find_max_stock`, `find_min_stock`) from UI presentation (`print_menu`, `show_inventory`).
* **Array Manipulation:** Passing arrays to functions via pointers along with their sizes to prevent memory leaks or out-of-bounds reading.
* **Input Buffer Management:** Utilizing `cin.ignore()` and `cin.get()` to handle the input buffer correctly and prevent terminal flickering or skipping.

## 📋 How to Run

### Prerequisites
You need a C++ compiler installed (e.g., GCC/G++).

### Compilation
Open your terminal in the project directory and run:
```bash
g++ store.cpp -o store_management
