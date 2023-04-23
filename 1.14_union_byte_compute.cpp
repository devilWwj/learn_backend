#include<iostream>
using namespace std;
union A
{
    int a[5];
    char b;
    double c;
};

int main(int argc, char const *argv[])
{
    cout<<sizeof(A)<<endl;
    return 0;
}

