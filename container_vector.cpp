#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>x;
  for(int i=0; i<1000; i++){
    x.push_back(i);
  }
  vector<int>::iterator p;
  for(p=x.begin(); p<x.end(); p++){
    cout << *p << " ";
  }
  return 0;
}