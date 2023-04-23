#include<iostream>
using namespace std;
int main() {
    int p1=1;
    int *p2;
    p2 = &p1;
    cout<<p1<<" "<<*p2<<endl;
    p1=2;
    cout<<p1<<" "<<*p2<<endl;
    *p2=3;
    cout<<p1<<" "<<*p2<<endl;
    return 0;
}