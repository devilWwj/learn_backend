#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    string str="Hello world.";
    const char * cstr = str.c_str();
    cout<<cstr<<endl;
    str="Abcd.";
    cout<<cstr<<endl;
    return 0;
}
