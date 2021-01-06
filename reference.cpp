#include <iostream>
using namespace std;

int* f(int* x){
    (*x)++;
    return x;
}

int& g(int& x){
    x++;
    return x;
}

int x;

int& h(){
    int q;
    return x;
}
int main()
{
    int a = 0;
    f(&a);
    cout << a << endl;
    g(a);
    cout << a << endl;
    h() = 16;
    cout << a << endl;
    return 0;
}