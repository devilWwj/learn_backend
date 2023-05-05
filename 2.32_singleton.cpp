#include<iostream>
using namespace std;
class CSingleton {
    private:
        CSingleton() {

        }
        static CSingleton *m_pInstance;

    public:
        static CSingleton * GetInstance()  {
            if (m_pInstance == NULL) {
                m_pInstance = new CSingleton();
            }
            return m_pInstance;
        }
};

CSingleton * CSingleton::m_pInstance = NULL;

int main(int argc, char const *argv[])
{
    
    CSingleton *s1 =  CSingleton::GetInstance();
    CSingleton *s2 = CSingleton::GetInstance();

    if (s1 == s2) {
        cout<<"s1=s2"<<endl;
    }
    return 0;
}