#include <iostream>
using namespace std;

class A{
    int i;
    public: 
        A() : i(0) {}
        void f() {cout << "f()" << endl;} // 等价于 void f(A* this) {cout << "f()" << endl;} 
        void f() const {cout << "f() const" << endl;} // 等价于 void f(const A* this) const {cout << "f() const" << endl;} 
};
int main()
{
    const A a;
    a.f();
    return 0;
}