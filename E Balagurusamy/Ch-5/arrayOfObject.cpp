#include <iostream>
using namespace std;
class employee
{
    string name;
    float age;
    public:
        void getData();
        void putData();
};
void employee :: getData()
{
    cout<<"Employee Name : ";
    cin>>name;
    cout<<"Employee age : ";
    cin>>age;
}
void employee ::putData()
{
    cout<<"Name : "<<name<<endl;
    cout<<"age : "<<age<<endl;
}
const int SIZE = 3;
int main() 
{
    employee manager[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        manager[i].getData();
        cout<<endl;
    }
    for(int i=0;i<SIZE;i++)
    {
        manager[i].putData();
        cout<<endl;
    }
    return 0;
}