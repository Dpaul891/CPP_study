#include<iostream>
#include<stdio.h>
using namespace std;
class A{
    public:
        A() : i(10) {}
        virtual void f() {cout << "A::f()" << i << endl;}
        int i;
};

class B: public A{
    public: 
        B() : j(20) {}
        virtual void f() {cout << "B::f()" << j << endl;}
        int j;
};
int main()
{
    
    // A a, b;
    // a.f();
    // cout << sizeof(a) << endl;
    // int *p = (int*)&a;
    // int *q = (int*)&b;
    // int *x = (int*)*p;
    // cout << x <<endl;
    // cout << *p << endl << *q << endl;
    // printf("%p\n", p);
    // printf("%p\n", (++p));
    // p++;
    // cout << *p << endl;
    // cout << sizeof(int) << endl;
    // return 0;

    // A a;
    // B b;
    // A *p = &b;
    // p->f();
    // a = b;
    // a.f();
    // return 0;

    A a;
    B b;
    A* p = &a;
    int* r = (int*)&a;
    int* t = (int*)&b;
    *r = *t;
    p->f();
    return 0;
}