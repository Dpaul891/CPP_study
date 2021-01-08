#include<iostream>
#include<string>
using namespace std;

static int objectCount = 0;
class HowMany{
    public:
        HowMany() {objectCount++; print("HowMany()");}
        HowMany(int i) {objectCount++; print("HowMany(int)");}
        HowMany(const HowMany& o) {objectCount++; print("HowMany(HM)");}
        void print(const string& msg = ""){
            if(msg.size() != 0)
                cout << msg << ": ";
            cout << "ObjectCount = " << objectCount << endl;
        }
        ~HowMany(){
            objectCount--;
            print("~HowMany");
        }
};

HowMany f(HowMany x){
    cout << "begin of f" << endl;
    x.print("x argument inside f()");
    cout << "end of f" << endl;
    return x; 
}
int main()
{
    HowMany h;
    h.print("after construction of h");
    HowMany h2 = f(h);
    //HowMany h2 = h;
    //HowMany h2(10);
    //HowMany h2 = 10;
    //HowMany h2(h);
    h.print("after call to f()");
    return 0;
}