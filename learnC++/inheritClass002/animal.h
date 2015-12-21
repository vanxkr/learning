#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal
{
    public:
        Animal();
        Animal(string name,
               string canCall,
               double runSpeed,
               bool canBite);
        virtual ~Animal();

        bool setName(string name);
        bool toCall();
    protected:
    private:
        string name;
        string canCall;
        double runSpeed; // unit: meter/second
        bool canBite;
};

#endif // ANIMAL_H
