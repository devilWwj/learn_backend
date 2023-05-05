#include<iostream>
#include<vector>
#include<iostream>
using namespace std;

void print(vector<int> v) {
    vector<int>::iterator iter = v.begin();
    for(; iter!= v.end(); iter++) {
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    vector<int> v;
    int values[] = {1, 3, 5,7};
    v.insert(v.end(), values+1, values+3);
    print(v);
    v.push_back(9);
    print(v);
    v.erase(v.begin() + 1);
    print(v);
    v.insert(v.begin()+1, 4);
    print(v);
    v.insert(v.end() - 1, 4, 6);
    print(v);
    v.erase(v.begin() + 1, v.begin() + 3);
    print(v);
    v.pop_back();
    print(v);
    v.clear();
    print(v);
    if (true == v.empty()) {
        cout<<"null"<<endl;
    }
    return 0;
}
