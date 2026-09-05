#ifndef LAPTOP_H
#define LAPTOP_H

#include "Product.h"
#include <iostream>
using namespace std;

class Laptop : public Product{
    private:
    int id;
    string brand;
    string model;
    string processor;
    int ram;
    int storage;

    public:
    Laptop();

    Laptop(int id, string name, double price, int quantity, 
           string brand, string model, string processor, int ram, int storage);
    virtual ~Laptop();

};

#endif