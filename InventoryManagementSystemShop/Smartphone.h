#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include "Product.h"
#include <iostream>
using namespace std;

class Smartphone : public Product {

  private:
    string type;
    string color;
    int storage;  

  public:
    Smartphone();
    Smartphone(int id, string name, double price, int quantity,string type, string color, int storage);

    virtual ~Smartphone();

    string getType();
    string getColor();
    int getStorage();

    void setType(string type);
    void setColor(string color);
    void setStorage(int storage);

    void display() override;
};
#endif
