#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog: public Animal
{
    public:
        Dog();
        Dog(string name,
            string canCall,
            double runSpeed,
            bool canBite);
        virtual ~Dog();
    protected:
    private:
};

#endif // DOG_H
