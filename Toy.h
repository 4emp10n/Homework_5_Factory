#pragma once
#include <string>
#include <iostream>
//========================
class IToy {
protected:
	std::string name;
	float price;
	std::string colour;
public:
	virtual ~IToy() {}
	virtual void createParts() = 0;
	virtual void connectParts() = 0;
	virtual void checkToy() = 0;
	virtual void stickLabel() = 0;
	virtual void showToy() = 0;
  	virtual void Operation()  = 0;
};


class CarToy : public IToy {
 public:
 	void createParts() override {std::cout << "Create parts for car\n"; }
	void connectParts() override { std::cout << "Connect car's parts\n"; }
	void checkToy()  override { std::cout << "Check car\n"; }
	void stickLabel()  override { std::cout << "Stick the label on the car\n"; name = "Car1"; colour = "red"; price = 100; }
	void showToy() override { std::cout << "ToyName: " << name << "Toy colour: " << colour << "Toy price: " << price << std::endl; }
  	void Operation()  override;
};
class BikeToy : public IToy {
 public:
 	void createParts() override { std::cout << "Create parts for Bike\n"; }
	void connectParts() override { std::cout << "Connect Bike's parts\n"; }
	void checkToy()  override { std::cout << "Check Bike\n"; }
	void stickLabel()  override { std::cout << "Stick the label on the Bike\n"; name = "Bike1"; colour = "blue"; price = 69.99; }
	void showToy() override { std::cout << "ToyName: " << name << "Toy colour: " << colour << "Toy price: " << price << std::endl; }
	void Operation()  override;
};
//========================

