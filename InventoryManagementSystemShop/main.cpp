#include <iostream>

#include "Inventory.h"
#include "Laptop.h"
#include "Smartphone.h"

using namespace std;

int main() {
  Inventory inventory;

  int choice;

  do {
    cout << "========== INVENTORY MANAGEMET ==========" << endl;
    cout << "1. Add Laptop" << endl;
    cout << "2. Add Smartphone" << endl;
    cout << "3. View All Product" << endl;
    cout << "4. Search Product" << endl;
    cout << "5. Update Product" << endl;
    cout << "6. Delete Product" << endl;
    cout << "7. Exit" << endl;
    cout << "Enter Your Choice: ";
    cin >> choice;

    switch (choice) {
      case 1: {
        int id, quantity, ram, storage;
        string name, brand, model, processor, DOM, gpu;
        double price;

        cout << "===== ADD LATOP =====" << endl;

        cout << "Enter ID: ";
        cin >> id;
        if (!inventory.isIdAvailable("Laptop", id)) {
          cout << "Laptop ID already exists!" << endl;
          break;
        }
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter quantity: ";
        cin >> quantity;
        cin.ignore();

        cout << "Enter Brand: ";
        getline(cin, brand);

        cout << "Enter Model: ";
        getline(cin, model);

        cout << "Enter Processor: ";
        getline(cin, processor);

        cout << "Enter date of Manufacture: ";
        getline(cin, DOM);

        cout << "Enter GPU: ";
        getline(cin, gpu);

        cout << "Enter RAM: ";
        cin >> ram;

        cout << "Enter Storage: ";
        cin >> storage;

        Laptop* laptop = new Laptop(id, name, price, quantity, brand, model,
                                    processor, DOM, gpu, ram, storage);

        inventory.addProduct(laptop);

        cout << "Prodcut Added Successfully" << endl;
        break;
      }
      case 2: {
        int id, quantity, storage;
        double price;
        string name, type, color;

        cout << "========== ADD SMARTPHONE ==========" << endl;
        cout << "Enter Smart phone ID:";
        cin >> id;
        if (!inventory.isIdAvailable("Smartphone", id)) {
          cout << "Smartphone ID already exists!" << endl;
          break;
        }
        cin.ignore();
        cout << "Enter Smart phone name: ";
        getline(cin, name);
        cout << "Enter Smart phone price: ";
        cin >> price;
        cin.ignore();
        cout << "Enter Quantity: ";
        cin >> quantity;
        cin.ignore();
        cout << "Enter Smart phone type:";
        getline(cin, type);
        cout << "Enter Smart phone color: ";
        getline(cin, color);
        cout << "Enter Smart phone storage: ";
        cin >> storage;

        Smartphone* smartphone =
            new Smartphone(id, name, price, quantity, type, color, storage);
        inventory.addProduct(smartphone);

        cout << "Smart phone added successfully" << endl;
        break;
      }

      case 3: {
        cout << "========== ALL PRODUCTS ==========" << endl;
        inventory.viewAllProduct();
        break;
      }

      case 4: {
        int typeChoice, id;
        string type;

        cout << "===== SEARCH PRODUCT =====" << endl;
        cout << "1. Laptop" << endl;
        cout << "2. Smamrtphone" << endl;
        cout << "Enter product type: ";
        cin >> typeChoice;

        if (typeChoice == 1) {
          type = "Laptop";
        } else if (typeChoice == 2) {
          type = "Smartphone";
        } else {
          cout << "Invalid Product type" << endl;
        }
        cout << "Enter " << type << "ID: ";
        cin >> id;
        inventory.searchProduct(type, id);

        break;
      }

      case 5: {
        int typeChoice, id, quantity;

        double price;
        string type;

        cout << "===== UPDATE PRODUCT =====" << endl;
        cout << "1. Laptop" << endl;
        cout << "2. Smartphone" << endl;
        cout << "Enter product type: ";
        cin >> typeChoice;

        if (typeChoice == 1) {
          type = "Laptop";
        } else if (typeChoice == 2) {
          type = "Smartphone";
        } else {
          cout << "Invalid product type" << endl;
        }

        cout << "Enter " << type << "ID: ";
        cin >> id;

        cout << "Enter New Price: ";
        cin >> price;

        cout << "Enter New Quantity: ";
        cin >> quantity;

        inventory.updateProduct(type, id, price, quantity);
        cout << type << " with id " << id << " updated successfully" << endl;
        break;
      }

      case 6: {
        int typeChoice, id;
        string type;

        cout << "===== DELETE PRODUCT =====" << endl;
        cout << "1. Laptop" << endl;
        cout << "2. Smartphone" << endl;
        cout << "Enter product type: ";
        cin >> typeChoice;

        if (typeChoice == 1) {
          type = "Laptop";
        } else if (typeChoice == 2) {
          type = "Smartphone";
        } else {
          cout << "Invalid product choice" << endl;
        }

        cout << "Enter " << type << "ID: ";
        cin >> id;

        inventory.deleteProduct(type, id);
        cout << type << " with id " << id << " deleted successfully" << endl;
        break;
      }
      case 7: {
        cout << "Exiting the system..." << endl;
        cout << "We are waiting to see you again" << endl;
        break;
      }
      default: {
        cout << "Invalid Choice" << endl;
      }
    }
  } while (choice != 7);
}
