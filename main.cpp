#include <iostream>
#include "ToyFactory.h"
#include "Toy.h"
//====================================
using namespace std;

void ClientCode(Creator& creator) 
{  
  creator.SomeOperation();
  std::cout<< std::endl;
}


int main() {
  std::cout << "App: Launched with the CarToyCreator.\n";
  Creator* creator = new CarToyCreator();
  ClientCode(*creator);
  std::cout << std::endl;
  std::cout << "App: Launched with the BikeToyCreator.\n";
  Creator* creator2 = new BikeToyCreator();
  ClientCode(*creator2);
  delete creator;
  delete creator2;
  return 0;
}
//====================================

