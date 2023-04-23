#include<iostream>
using namespace std;

class CStudent {
    public:
        void display();
    private:
        int num;
        char name[20];
        int age;
};

void CStudent::display() {
    cout<<"num:"<<num<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
}