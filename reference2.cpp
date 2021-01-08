#include<iostream>
using namespace std;
const int SIZE = 32;
double myarray[SIZE];
class A{
    public:
        int i;
        A() : i(0) {}
};
double& subscript(const int i)
{
  return myarray[i];
}

void f(const int& i)
{
    cout << i << endl;
}
A f2()
{
    A a;
    return a;
}
int main()
{
    for(int i=0; i<SIZE; i++)
    {
        myarray[i] = i * 0.5;
    }
    double value = subscript(12);
    subscript(3) = 34.5;
    cout << myarray[3] << endl;
    cout << value << endl;

    int i = 3;
    f(i*3);

    // f2().i = 10; // vscode 里面是error， 老师上课用g++编译是ok的
    return 0;
}