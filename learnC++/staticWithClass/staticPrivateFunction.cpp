#include <iostream>
using namespace std;

class ClassA {
public:
    int getB();
    static int getA();
    static ClassA create(int b);
protected:
private:
    ClassA(int b);
    int b;
    static int a;    
};

int ClassA::getA()
{
    return a;
}

int ClassA::getB() 
{
    return b;
}

ClassA ClassA::create(int b)
{
    return ClassA(b);
}

ClassA::ClassA(int b)
{
    this->b = b;
}

int ClassA::a = 100;

int main()
{
    cout << ClassA::getA() << endl;
    ClassA a = ClassA::create(10);
    cout << a.getB() << endl;
    return 0;
}
