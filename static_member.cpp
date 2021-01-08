#include<iostream>
using namespace std;
class A{
    public:
        A() {i=0;} // initializer list 只能对非static的做初始化
        void print() {cout << i << endl;}
        void set(int ii) {i = ii;}
        static void say(int ii) {cout << ii << i << endl;} //静态的函数只能访问静态的成员变量，这里就不能访问k
        //静态的函数是没有hidden parameter--this的，所以不能使用this指针，也就不能访问非静态成员变量
        static int j;
    private:
        int k;
        static int i; //只是声明
};
int A::i = 20; //这句话才是definition，也是初始化
int A::j = 20;
int main()
{
    A a, b;
    a.set(10);
    b.print();
    cout << a.j <<  endl;
    cout << A::j << endl;
    a.say(0);
    A::say(0);
    return 0;
}