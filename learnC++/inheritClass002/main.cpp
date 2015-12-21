#include <iostream>
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main()
{
    Animal animal;
    animal.toCall();

    Dog dog("Dog", "www", 10, true);
    dog.toCall();

    return 0;
}
