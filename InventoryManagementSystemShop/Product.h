#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product{
    private:
    int id;
    string name;
    double price;
    int quantity;

    public:
    Product();

    Product(int id, string name, double price, int quantity );

    virtual ~Product();

    int getId();
    string getName();
    double getPrice();
    int getQuantity();

    void setId(int id);
    void setName(string name);
    void setPrice(double price);
    void setQuantity(int quantity);

    virtual void display();
};
#endif
