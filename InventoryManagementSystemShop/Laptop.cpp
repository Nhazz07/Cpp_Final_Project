#include "Laptop.h"

#include <iostream>

Laptop::Laptop() : Product() {
  id = 0;
  brand = "";
  model = "";
  processor = "";
  DOM = "";
  gpu = "";
  ram = 0;
  storage = 0;
}

Laptop::Laptop(int id, string name, double price, int quantity, string brand,
               string model, string processor, string DOM, string gpu, int ram,
               int storage)
    : Product(id, name, price, quantity) {
  this->id = id;
  this->brand = brand;
  this->model = model;
  this->processor = processor;
  this->DOM = DOM;
  this->gpu = gpu;
  this->ram = ram;
  this->storage = storage;
}
