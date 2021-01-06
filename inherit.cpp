#include <iostream>
using namespace std;

class A {
    public:
        A(int ii):i(ii) {cout << "A::A()" << endl;}
        ~A() {cout << "A::~A()" << endl;}
        void print() {cout << "A::print()" << i << endl;}
        void print(int i) {cout << i << endl; print();}
    protected:
        void set(int ii) {i = ii;}
    private:
        int i;
};

class B : public A{
    public:
        B() : A(15) {cout << "B::B()" << endl;}
        ~B() {cout << "B:~B()" << endl;}
        void print() {cout << "B::print()" << endl;}
        void f(){
            set(20);
            // i = 30; can not reach this private i 
            print();
        }
};
int main()
{
    B b;
    // b.set(10);
    b.print();
    b.f();
    b.A::print(200); // b.print(200) 是错误的
    return 0;
}