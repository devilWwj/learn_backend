#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef struct tagStudentInfo
{
    
    int iID;
    string strName;
    bool operator < (tagStudentInfo const& r) const {
        // 这个函数制定排序策略，按iID排序，如果iID相等的话，按strName排序
        if (iID < r.iID) return true;
        if (iID == r.iID) return strName.compare(r.strName) < 0;
        return false;
    }
} StudentInfo;

int main(int argc, char const *argv[])
{
    map<StudentInfo, int> mapStudent;
    StudentInfo studentInfo;
    studentInfo.iID = 1;
    studentInfo.strName = "student_one";
    mapStudent[studentInfo] = 90;
    studentInfo.iID = 2;
    studentInfo.strName = "student_two";
    mapStudent[studentInfo] = 80;
    map<StudentInfo, int>::iterator iter = mapStudent.begin();
    for(;iter != mapStudent.end(); iter++) {
        cout<<iter->first.iID<<" "<<iter->first.strName<<iter->second<<endl;
    }
    return 0;
}
