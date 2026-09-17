#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include <Product.h>

using namespace std;

class Inventory{
    private:
    vector<Product*> products;

    public:

    Inventory();

    ~Inventory();

    void addProduct(Product* product);
    void viewAllProduct();
    void searchProduct(string type, int id);
    void updateProduct(string type,int id, double price, int quantity);
    void deleteProduct(string type,int id);
};
#endif
