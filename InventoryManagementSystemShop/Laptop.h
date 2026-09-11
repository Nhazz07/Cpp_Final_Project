#ifndef LAPTOP_H
#define LAPTOP_H

#include <iostream>

#include "Product.h"
using namespace std;

// Laptop (Subclass), Extends from Product
class Laptop : public Product {
  // Access Modifers

 private:
  int id;
  string brand;
  string model;
  string processor;
  string DOM;
  string gpu;
  int ram;
  int storage;

 public:
  // Constructor
  // Default Constructor
  Laptop();
  // Constructor with parameter
  Laptop(int id, string name, double price, int quantity, string brand,
         string model, string processor, string DOM, string gpu, int ram,
         int storage);
  // Destructor
  virtual ~Laptop();

  // Getter
  int getId();
  string getBrand();
  string getModel();
  string getProcessor();
  string get_Gpu();
  string get_DOM();
  int get_Ram();
  int get_Storage();
  // Setter
  void setId(int id);
  void setBrand(string brand);
  void setModel(string model);
  void setProcessor(string processor);
  void set_Gpu(string gpu);
  void set_DOM(string DOM);
  void set_Ram(int ram);
  void set_Storage(int storage);

  void display() override;
};

#endif
