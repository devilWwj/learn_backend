#include<iostream>
using namespace std;

struct SStudent
{
    public:
        void display() {
            cout<<"num:"<<num<<endl;
            cout<<"name:"<<name<<endl;
            cout<<"age:"<<age<<endl;
        }

    private:
        int num;
        char name[20];
        int age;

};
