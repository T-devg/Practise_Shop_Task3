//
// Created by Ольга on 17.10.2026.
//

#ifndef PRACTISE_SHOP_TASK3_OVERCOAT_H
#define PRACTISE_SHOP_TASK3_OVERCOAT_H
#include <iostream>
#include <string>
using namespace std;
class Overcoat {
    string name;
    string type;
    string size;
    float price;
    int productNumber;
    static int counter;

public:
    Overcoat();
    Overcoat(string name, string type, string size, float price);
    string getName()const;
    string getType()const;
    string getSize()const;
    float getPrice() const;
    int getNumber()const;
    int getCounter()const;

    void setName(string name);
    void setType(string type);
    void setSize(string size);
    void setPrice(float price);

    bool operator ==(const Overcoat &obj) const;
    bool operator !=(const Overcoat &obj) const;
    bool operator >(const Overcoat &obj) const;
    bool operator <(const Overcoat &obj) const;
    bool operator >=(const Overcoat &obj) const;
    bool operator <=(const Overcoat &obj) const;

    Overcoat& operator++();
    Overcoat& operator--();
    Overcoat operator++(int);
    Overcoat operator--(int);

    friend ostream& operator<<(ostream &ost,const Overcoat& obj);
    friend istream& operator>>(istream &ist,  Overcoat& obj);
    bool isValidSize(string s) const;



};


#endif //PRACTISE_SHOP_TASK3_OVERCOAT_H
