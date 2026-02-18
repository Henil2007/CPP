#include <iostream>
#include<string.h>
using namespace std;
struct student
{
    int rno;
    string name;
    float marks;
};

int main() 
{
    student s[3];
    student *p = s;
    int i;

    for(i=0;i<3;i++)
    {
        cout<<"Enter Roll no. : ";
        cin>>(p+i)->rno;
        cout<<"Enter Name : ";
        cin>>(p+i)->name;
        cout<<"Enter marks : ";
        cin>>(p+i)->marks;
    }

    cout<<endl<<"Rno\tName\tMarks";
    for(i=0;i<3;i++)
    {
        cout<<endl<<(p+i)->rno<<"\t"<<(p+i)->name<<"\t"<<(p+i)->marks;
    }
    return 0;
}