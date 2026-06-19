#include <iostream>
using namespace std;

void print_menu() {
    cout << "=======================" << endl;
    cout << "Store Managment System" << endl;
    cout << "=======================" << endl;
        cout << "1. Show inventory" << endl;
        cout << "2. Find product with maximum stock" << endl;
        cout << "3. Find product with minimum stock" << endl;
        cout << "4. Update stock" << endl;
        cout << "5. Exit" << endl;
        cout << "=======================" << endl;
        cout << "Enter your choice: ";
}

void show_inventory(int arr[], int size) {
    cout << "\nCurrent Inventory:\n";
    for (int i = 0; i < size; i++) {
        cout << "Product " << i + 1 << ": " << arr[i] << " units\n";
    }
}

int find_max_stock (int arr[], int size) {
    int max_stock = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_stock) {
            max_stock = arr[i];
        }
    }
    return max_stock;
}

int find_min_stock (int arr[], int size) {
    int min_stock = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min_stock) {
            min_stock = arr[i];
        }
    }
    return min_stock;
}

int main() {
    int stock[5] = {10, 20, 15, 5, 25};
    int choice = 0;
    while (choice != 5) {
        print_menu();
        cin >> choice;
        switch (choice) {
            case 1:
            show_inventory(stock, 5);
            break;
            case 2:
            cout << "Product with maximum stock has: " << find_max_stock(stock, 5) << " units\n";
            break;
            case 3:
            cout << "Product with minimum stock has: " << find_min_stock(stock, 5) << " units\n";
            break;
            case 4:{    
                int product;
            int units;
            cout << "Enter product number (1-5): ";
            cin >> product;
            cout << "Enter new units: ";
            cin >> units;
            if (product >= 1 && product <= 5) {
                stock[product - 1] = units;
                cout << "Stock updated successfully.\n";
            } else {
                cout << "Invalid product number. Please try again.\n";
            }
            break;
            }
            case 5:
            cout << "Exiting from the system. Goodbye!\n";
            break;
            default:
            cout << "Invalid choice. Please try again.\n";
            }
            if (choice != 5) {
                cout << "\nPress Enter to continue...";
                cin.ignore();
                cin.get(); 
 }
 }
 return 0;
 }