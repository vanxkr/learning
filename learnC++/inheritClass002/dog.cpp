#include "dog.h"

Dog::Dog()
{
    //ctor
}

Dog::Dog(string name, string canCall, double runSpeed, bool canBite): Animal(name, canCall, runSpeed, canBite) {

}

Dog::~Dog()
{
    //dtor
}

