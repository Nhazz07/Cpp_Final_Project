#include "Laptop.h"

#include <iostream>

// Default Constructor
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
// Constructor with 11 parameters
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

// Destructor
Laptop::~Laptop(){
    cout << "Laptop Information Deleted" << endl;
}

// Getter
int Laptop::getId() {
  return id;
}
string Laptop::getBrand() {
  return brand;
}
string Laptop::getModel(){
    return model;
}
string Laptop::getProcessor(){
    return processor;
}
string Laptop::get_DOM(){
    return DOM;
}
string Laptop::get_Gpu(){
    return gpu;
}
int Laptop::get_Ram(){
    return ram;
}
int Laptop::get_Storage(){
    return storage;
}

// Setter


  void Laptop::setId(int id){
    this->id = id;
  }
  void Laptop::setBrand(string brand){
    this -> brand = brand;
  }
  void Laptop::setModel(string model){
    this->model = model;
  }
  void Laptop::setProcessor(string processor){
    this->processor = processor;
  }
  void Laptop::set_Gpu(string gpu){
    this->gpu = gpu;
  }
  void Laptop::set_DOM(string DOM){
    this->DOM = DOM;
  }
  void Laptop::set_Ram(int ram){
    this-> ram = ram;
  }
  void Laptop::set_Storage(int storage){
    this-> storage = storage;
  }
