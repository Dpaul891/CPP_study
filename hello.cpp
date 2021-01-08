#include<iostream>
using namespace std;
void f(){
    static int x = 10;
}
int main()
{
    double a = 3.3;
    cout << a << endl;
    cout << int(a) << endl;
    return 0;
}
