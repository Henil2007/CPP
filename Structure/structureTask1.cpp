#include <iostream>
using namespace std;

struct student 
{
    int  id; 
    float marks; 
};

void display(student s)
{
    cout<<"student id : "<<s.id<<endl;
    cout<<"student marks : "<<s.marks<<endl;
}
void update(student s)
{
    cout<<"student marks : "<<s.marks+1<<endl;
}

int main() 
{
    student s1{101,89}; 
    student s2{102,99};
    student s3{103,100};
    display(s1);
    update(s1);
    display(s2);
    update(s2);
    display(s3);
    update(s3);
    return 0;
}