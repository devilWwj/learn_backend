#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    size_t length;
    char buffer[8];
    string str("Test string......");
    cout<<"str:"<<str<<endl;
    length=str.copy(buffer, 7, 5);
    buffer[length]='\0';
    
    return 0;
}
