#include<iostream>
using namespace std;

int min(int a, int b) {
    if (a < b) return a;
    return b;
}

int main() {
    int a = 10, b = 1;
    cout<<min(a, b)<<endl;
    return 0;
}