#include <iostream>
#include "Inventory.h"
#include "Laptop.h"
#include "Smartphone.h"

using namespace std;

int main(){
    Inventory inventory;

    int choice;

    do{
        cout << "========== INVENTORY MANAGEMET ==========" << endl;
        cout << "1. Add Laptop" << endl;
        cout << "2. Add Smartphone" << endl;
        cout << "3. View All Product" << endl;
        cout << "4. Search Product" << endl;
        cout << "5. Update Product" << endl;
        cout << "6. Delete Product" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter Your Choice: " ;
        cin >> choice;

        switch(choice){
            case 1 :{
                int id, quantity, ram, storage;
                string name, brand, model, processor,DOM, gpu;
                double price;

                cout << "===== ADD LATOP =====" << endl;

                cout << "Enter ID: ";
                cin >> id;
                cin.ignore();

                cout << "Enter Name: ";
                getline(cin,name);

                cout << "Enter Price: ";
                cin >> price;

                cout << "Enter quantity: ";
                cin >> quantity;
                cin.ignore();

                cout << "Enter Brand: ";
                getline(cin,brand);

                cout << "Enter Model: ";
                getline(cin, model);

                cout << "Enter Processor: ";
                getline(cin,processor);

                cout << "Enter date of Manufacture: ";
                getline(cin, DOM);

                cout << "Enter GPU: ";
                getline(cin, gpu);

                cout << "Enter RAM: ";
                cin >> ram;

                cout << "Enter Storage: ";
                cin >> storage;

                Laptop* laptop = new Laptop(id,name,price,quantity,brand,model,processor,DOM,gpu,ram,storage);

                inventory.addProduct(laptop);

                cout << "Prodcut Added Successfully" << endl;
                break;

            }
        }
    }while(choice != 7);
}
