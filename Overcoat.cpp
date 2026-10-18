//
// Created by Ольга on 17.10.2026.
//

#include "Overcoat.h"

Overcoat::Overcoat() {
    name = "undefined";
    type = "undefined";
    size = "undefined";
    price = 0;
    productNumber = counter + 1;
    counter++;
}

Overcoat::Overcoat(string name, string type, string size, float price) {
    this->name = name;
    this->type = type;
    setSize(size);
    setPrice(price);
    productNumber = counter + 1;
    counter++;
}

string Overcoat::getName() const {
    return name;
}

string Overcoat::getType() const {
    return type;
}

string Overcoat::getSize() const {
    return size;
}

float Overcoat::getPrice() const {
    return price;
}

int Overcoat::getNumber() const {
    return productNumber;
}

int Overcoat::getCounter() const {
    return counter;
}

void Overcoat::setName(string name) {
    this->name = name;
}

void Overcoat::setType(string type) {
    this->type = type;
}

bool Overcoat::isValidSize(string s) const {
    if (s == "XS") {
        return true;
    }
    else if (s == "S") {
        return true;
    }
    else if (s == "M") {
        return true;
    }
    else if (s == "L") {
        return true;
    }
    else if (s == "XL") {
        return true;
    }
    else if (s == "XXL") {
        return true;
    }
    else if (s == "XXXL") {
        return true;
    }
    else {
        return false;
    }
}



void Overcoat::setSize(string size) {
    if (isValidSize(size)) {
        this->size = size;
    }
    else {
        cout << "Wrong size!" << endl;
    }
}

void Overcoat::setPrice(float price) {
    if (price > 0) {
        this->price = price;
    }
    else {
        cout << "Price should be more than zero";
    }
}

bool Overcoat::operator==(const Overcoat &obj) const {
    return type == obj.type;
}

bool Overcoat::operator!=(const Overcoat &obj) const {
    return !(*this == obj);
}

bool Overcoat::operator>(const Overcoat &obj) const {
    return price > obj.price;
}

bool Overcoat::operator<(const Overcoat &obj) const {
    return price < obj.price;
}

bool Overcoat::operator>=(const Overcoat &obj) const {
    return price >= obj.price;
}

bool Overcoat::operator<=(const Overcoat &obj) const {
    return price <= obj.price;
}

Overcoat & Overcoat::operator++() {
    if (size == "XS") {
        size = "S";
    }
    else if (size == "S") {
        size = "M";
    }
    else if (size == "M") {
        size = "L";
    }
    else if (size == "L") {
        size = "XL";
    }
    else if (size == "XL") {
        size = "XXL";
    }
    else if (size == "XXL") {
        size = "XXXL";
    }
    return *this;
}

Overcoat & Overcoat::operator--() {
    if (size == "XXXL") {
        size = "XXL";
    }
    else if (size == "XXL") {
        size = "XL";
    }
    else if (size == "XL") {
        size = "L";
    }
    else if (size == "L") {
        size = "M";
    }
    else if (size == "M") {
        size = "S";
    }
    else if (size == "S") {
        size = "XS";
    }
    return *this;
}

Overcoat Overcoat::operator++(int) {
    Overcoat old = *this;
    ++(*this);
    return old;
}

Overcoat Overcoat::operator--(int) {
    Overcoat old = *this;
    --(*this);
    return old;
}



ostream & operator<<(ostream &ost, const Overcoat &obj) {
    ost << "Name: " << obj.name << endl;
    ost << "Type: " << obj.type << endl;
    ost << "Size: " << obj.size << endl;
    ost << "Price: " << obj.price << endl;
    ost << "Product number: " << obj.productNumber;
    return ost;
}

istream & operator>>(istream &ist, Overcoat &obj) {
    float p;
    string s;
    cout << "\nSet name: ";
    ist >> obj.name;
    cout << "\nSet type: " ;
    ist >> obj.type;
    cout << "\nSet size: " ;
    ist >> s;
    cout << "\nSet price: " ;
    ist >> p;
    obj.setSize(s);
    obj.setPrice(p);
    return ist;
}

