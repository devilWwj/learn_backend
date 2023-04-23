#include<iostream>
#include<string.h>
using namespace std;
struct student
{
    int num;
    char name[20];
    int age;
};

int main() {
    student stu1;
    student stu2;
    stu1.num = 1;
    char temp[20]="Xiao ming";
    strncpy(stu1.name, temp, strlen(temp));
    stu1.age = 10;
    cout<<stu1.num<<" "<<stu1.name<<" "<<stu1.age<<endl;
    student *stu3 = &stu1; // stu3是结构体的指针，指向stu1
    (*stu3).num = 2;
    cout<<stu1.num<<" "<<stu1.name<<" "<<stu1.age<<endl;

    return 0;
}
