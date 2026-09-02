#include "Product.h"
#include <iostream>

Product::Product(){
    id = 0;
    name = "";
    price = 0.0;
    quantity = 0;
}

Product::Product(int id, string name, double price, int quantity){
    this->id = id;
    this->name = name;
    this->price = price;
    this->quantity = quantity;
}

Product::~Product(){
    cout << "Product Destroyed" << endl;
}

// Getter
int Product::getId(){
    return id;
}
string Product::getName(){
    return name;
}
double Product::getPrice(){
    return price;
}
int Product::getQuantity(){
    return quantity;
}

// Setter
void Product::setId(int id){
    this->id = id;
}
void Product::setName(string name){
    this->name = name;
}
void Product::setPrice(double price){
    this->price = price;
}
void Product::setQuantity(int quantity){
    this->quantity = quantity;
}

void Product::display(){
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Price: "<< price << endl;
    cout << "Quantity: "<< quantity << endl;
}

