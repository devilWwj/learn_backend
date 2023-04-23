#include<iostream>
using namespace std;
int main() {
    int a = 2;
    int &r = a;
    a = a+4;
    cout<<a<<" "<<r<<endl;
    r = 10;
    cout<<a<<" "<<r<<endl;
    return 0;
}