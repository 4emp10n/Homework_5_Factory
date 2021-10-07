#pragma once
#include "Toy.h"

//=========================
class Creator {
  
 public:
  virtual ~Creator(){};
  virtual IToy* FactoryMethod() const = 0;
  

  	void SomeOperation()  {
    
    IToy* toy = this->FactoryMethod();

	toy->Operation();
    delete toy;
    
  }
};

class CarToyCreator : public Creator {
 
 public:
  IToy* FactoryMethod() const override {
    return new CarToy();
  }
};

class BikeToyCreator : public Creator {
 public:
  IToy* FactoryMethod() const override {
    return new BikeToy();
  }
};
//=========================


