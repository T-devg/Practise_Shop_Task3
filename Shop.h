//
// Created by Ольга on 18.10.2026.
//

#ifndef PRACTISE_SHOP_TASK3_SHOP_H
#define PRACTISE_SHOP_TASK3_SHOP_H
#include "Overcoat.h"
#include <vector>
class Shop {
private:
    vector<Overcoat> shop;
public:
    Shop() {
        cout << "Shop is opened!" << endl;
    }
    void add(Overcoat& obj);
    void remove(int number);
    void changeSize(int number, char operation);
    void findTypes(string type)const;
    void sortPrices();

    void showAll()const;
};


#endif //PRACTISE_SHOP_TASK3_SHOP_H
