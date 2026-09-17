#include "Inventory.h"
#include "Laptop.h"
#include "Smartphone.h"
#include <iostream>

using namespace std;

Inventory::Inventory() {}

Inventory::~Inventory() {
    for (Product* product : products) {
        delete product;
    }
}

void Inventory::addProduct(Product* product) {
    products.push_back(product);
}

void Inventory::viewAllProduct() {
    if (products.empty()) {
        cout << "Inventory is empty" << endl;
        return;
    }

    for (Product* product : products) {
        product->display();
        cout << "------------------" << endl;
    }
}

void Inventory::searchProduct(string type, int id) {
    for (Product* product : products) {

        if (type == "Laptop" &&
            dynamic_cast<Laptop*>(product) != nullptr &&
            product->getId() == id) {

            product->display();
            return;
        }

        if (type == "Smartphone" &&
            dynamic_cast<Smartphone*>(product) != nullptr &&
            product->getId() == id) {

            product->display();
            return;
        }
    }

    cout << "Product Not Found!!" << endl;
}

void Inventory::updateProduct(string type, int id, double price, int quantity) {
    for (Product* product : products) {

        if (type == "Laptop" &&
            dynamic_cast<Laptop*>(product) != nullptr &&
            product->getId() == id) {

            product->setPrice(price);
            product->setQuantity(quantity);

            cout << "Laptop updated successfully!" << endl;
            return;
        }

        if (type == "Smartphone" &&
            dynamic_cast<Smartphone*>(product) != nullptr &&
            product->getId() == id) {

            product->setPrice(price);
            product->setQuantity(quantity);

            cout << "Smartphone updated successfully!" << endl;
            return;
        }
    }

    cout << "Product Not Found!!" << endl;
}

void Inventory::deleteProduct(string type, int id) {
    for (size_t i = 0; i < products.size(); i++) {

        if (type == "Laptop" &&
            dynamic_cast<Laptop*>(products[i]) != nullptr &&
            products[i]->getId() == id) {

            delete products[i];
            products.erase(products.begin() + i);

            cout << "Laptop deleted successfully!" << endl;
            return;
        }

        if (type == "Smartphone" &&
            dynamic_cast<Smartphone*>(products[i]) != nullptr &&
            products[i]->getId() == id) {

            delete products[i];
            products.erase(products.begin() + i);

            cout << "Smartphone deleted successfully!" << endl;
            return;
        }
    }

    cout << "Product Not Found!!" << endl;
}
