#include "animal.h"

Animal::Animal()
{
    //ctor
    new (this)Animal("animal", "BBB", 10.0f, true);
}

Animal::Animal(string name,
               string canCall,
               double runSpeed,
               bool canBite) {
    this->name = name;
    this->canCall = canCall;
    this->runSpeed = runSpeed;
    this->canBite = canBite;
}

Animal::~Animal()
{
    //dtor
}

bool Animal::setName(string name) {
    this->name = name;
    return true;
}

bool Animal::toCall() {
     cout << canCall << endl;
 }
