#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    char *endptr;
    char nptr[] = "123abc";
    int ret = strtol(nptr, &endptr, 10);
    cout<<"ret:"<<ret<<endl;
    cout<<"endptr:"<<endptr<<endl;

    return 0;
}
