
#include <iostream>
#include <string>
#include "Overcoat.h"
#include "Shop.h"
using namespace std;
int Overcoat::counter  = 0;
int main() {
    Shop store;
    int choice;
    do {
        cout << "\n===== SHOP =====" << endl;
        cout << "1. Add item" << endl;
        cout << "2. Remove item" << endl;
        cout << "3. Change size" << endl;
        cout << "4. Find items by type" << endl;
        cout << "5. Sort items by price" << endl;
        cout << "6. Show all items" << endl;
        cout << "0. Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;
        switch (choice) {
        case 1: {
            Overcoat obj;
            cin >> obj;
            store.add(obj);
            break;
        }
        case 2: {
            int number;
            cout << "Enter product number: ";
            cin >> number;
            store.remove(number);
            break;
        }
        case 3: {
            int number;
            char operation;
            cout << "Enter product number: ";
            cin >> number;
            cout << "Enter '+' to increase size or '-' to decrease: ";
            cin >> operation;

            store.changeSize(number, operation);
            break;
        }
        case 4: {
            string type;
            cout << "Enter type (male/female/child): ";
            cin >> type;
            store.findTypes(type);
            break;
        }
        case 5: {
            store.sortPrices();
            cout << "\nItems sorted by price:" << endl;
            store.showAll();
            break;
        }

        case 6: {
            store.showAll();
            break;
        }
        case 0: {
            cout << "Goodbye!" << endl;
            break;
        }

        default:
            cout << "Wrong choice!" << endl;
        }
    } while (choice != 0);

    return 0;
}
