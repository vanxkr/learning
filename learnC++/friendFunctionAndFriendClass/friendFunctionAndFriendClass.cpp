#include <iostream>
using namespace std;

class A {
public:
    A(int x, int y);;
    ~A();
    friend double getArea(const A &a);
    friend class B;
protected:
private:
    double x, y;
};
A::A(int x, int y)
{
    this->x = x;
    this->y = y;
}
A::~A(){}
double getArea(const A &a)
{
    return a.x*a.y;
}
#if 1
class B {
public:
    void showA(A &a) {
        cout << a.x << " " << a.y << endl;
    }
protected:
private:
};
#endif
int main()
{
    A a(10, 10);
    cout << getArea(a) << endl;
    B b;
    b.showA(a);
    return 0;
}
