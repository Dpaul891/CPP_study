#include<iostream>
#include<iomanip>
using namespace std;
void f(int){
    cout << "hello" << endl;
}
ostream& tab(ostream& out){
  return out << "111";
}

int main()
{
    int n;
    cin >> n;
    cout << hex << n << endl;
    cout << setprecision(2) << 1000.243 << endl;
    cout << setw(20) << "OK" << endl;

    cout << "Hello" << tab << "World" << endl;
    return 0;
}
