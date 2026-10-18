//
// Created by Ольга on 18.10.2026.
//

#include "Shop.h"

void Shop::add(Overcoat &obj) {
    shop.push_back(obj);
    cout << "New item added: " << obj.getName() << endl;
}

void Shop::remove(int number) {
    for (int i =0; i < shop.size(); i++) {
        if (shop[i].getNumber() == number) {
            shop.erase(shop.begin()+ i);
            cout << "Item is removed: " << shop[i].getName() << endl;
            return;
        }
    }
    cout << "Item is not found!" << endl;
}

void Shop::changeSize(int number, char operation) {
    for (int i =0; i < shop.size(); i++) {
        if (shop[i].getNumber() == number) {
            if (operation == '+') {
                ++shop[i];
            }
            else if (operation == '-') {
                --shop[i];
            }
            cout << "New size: " << shop[i].getSize() << endl;
            return;
        }
    }
    cout << "Item is not found!" << endl;
}

void Shop::findTypes(string type) const {
    for (int i = 0; i < shop.size(); i++) {
        if (shop[i].getType() == type) {
            cout << shop[i] << endl;
        }
    }
}

void Shop::sortPrices() {
    for (int i = 0; i < shop.size(); i++) { //бульбашкове сортування
        for (int j = 0; j < shop.size() - 1; j++) {
            if (shop[j].getPrice() > shop[j + 1].getPrice()) {
                Overcoat temp = shop[j];
                shop[j] = shop[j + 1];
                shop[j + 1] = temp;
            }
        }
    }
}

void Shop::showAll() const {
    for (int i = 0; i < shop.size(); i++) {
        cout << shop[i] << endl;
    }
}