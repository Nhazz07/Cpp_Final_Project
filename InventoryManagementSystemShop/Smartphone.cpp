#include "Smartphone.h"
#include <iostream>
using namespace std;

Smartphone::Smartphone(int id, string name, double price, int quantity, string type, string color, int storage)
:Product(id, name, price, quantity) {
    this -> type = type;
    this -> color = color;
    this -> storage = storage;
}

Smartphone::Smartphone() {}

Smartphone::~Smartphone() {
}

string Smartphone::getType() {
    return type;
}
string Smartphone::getColor() {
    return color;
}
int Smartphone::getStorage() {
    return storage;
}

void Smartphone::setType(string type) {
    this->type = type;
}
void Smartphone::setColor(string color) {
    this->color = color;
}
void Smartphone::setStorage(int storage) {
    this->storage = storage;
}

void Smartphone::display() {
    Product::display();
    cout << "Type: " << type << endl;
    cout << "Color: " << color << endl;
    cout << "Storage: " << storage << " GB" << endl;
}
