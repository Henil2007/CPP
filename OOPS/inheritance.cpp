#include <iostream>
using namespace std;
class Student // Base class
{
    protected:
        int rollNo = 1;
        string name = "Henil";

};
class Teacher : public Student // Derived class
{
    public:
        string subject = "CPP";
    void show()
    {
        cout<<"Student roll no : "<<rollNo<<endl;
        cout<<"Student name : "<<name<<endl;
        cout<<"Subject studing : "<<subject<<endl;
    }
};
int main() 
{
    Teacher t;
    t.show();
    return 0;
}
