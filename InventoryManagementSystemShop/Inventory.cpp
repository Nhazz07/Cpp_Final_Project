#include <Inventory.h>
#include <iostream>

using namespace std;

Inventory::Inventory(){

}
Inventory::~Inventory(){
    for(Product* product : products){
        delete product;
    }
}
void Inventory::addProduct(Product* product){
    products.push_back(product);
}

void Inventory::viewAllProduct(){
    if(products.empty()){
        cout << "Inventory is empty" << endl;
        return;
    }
    for(Product* product : products){
        product->display();
        cout << "------------------" << endl;
    }
}

void Inventory::searchProduct(int id){
    for(Product* product : products){
        if(product->getId() == id){
            product->display();
            return;
        }
    }
    cout << "Product Not Found!!" << endl;
}

void Inventory::updateProduct(int id, double price, int quantity){
    for(Product* product : products){
        if(product->getId() == id){
            product->setPrice(price);
            product->setQuantity(quantity);

            cout << "Product Updated Successfully!!" << endl;
            return;
        }
    }
    cout << "Product Not Found!!" << endl;
}

void Inventory::deleteProduct(int id) {
    for (int i = 0; i < products.size(); i++) {
        if (products[i]->getId() == id) {
            delete products[i];
            products.erase(products.begin() + i);

            cout << "Product deleted successfully." << endl;
            return;
        }
    }

    cout << "Product not found." << endl;
}
