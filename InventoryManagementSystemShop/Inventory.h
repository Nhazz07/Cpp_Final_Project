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
    void searchProduct(int id);
    void updateProduct(int id, double price, int quantity);
    void deleteProduct(int id);
};
#endif
