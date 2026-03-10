#include <iostream>
using namespace std;
class person 
{
    protected : 
        string  name ; 
    public : 
        person()
        {
            cout<<"enter the name :"; 
            cin>>name; 
        }
};
class student : public person
{
    protected : 
        int rollno; 
        int  marks[5]; 
    public : 
        student()
        {
            cout<<"enter the roll no :";
            cin>>rollno;

            cout<<"enter the marks  of  5 subjects:";
            for(int i=0; i<5; i++)
            {
                cin>>marks[i];
            }
        }
};

class result : public student
{
    private : 
        int total =0; 
        float avg; 
        int max = marks[1] , min = marks[0];
        char grade;
    public : 
        result()
        {
            for(int i=0; i<5; i++)
            {
                total+=marks[i];

                if(marks[i] > max)
                {
                    max = marks[i];
                }
                if(marks[i] < min)
                {
                    min = marks[i];
                }
            }
            avg =(float)total/5;
            if(avg > 90)
            {
                grade = 'A';
            }
            else if(avg > 80)
            {
                grade = 'B';
            }
            else if(avg > 70)
            {
                grade = 'c';
            }
            else if(avg > 50)
            {
                grade = 'D';
            }
            else
            {
                grade = 'F';
            }
        }
        void display()
        {
            cout<<"student name is "<<name<<endl;
            cout<<"roll no is "<<rollno<<endl;

            cout<<"total marks are :";

            for(int i=0; i<5; i++)
            {
                cout<<marks[i]<<" ";
            }
            cout<<endl<<"Total marks are :"<<total<<endl;
            cout<<"average marks are :"<<avg<<endl;
            cout<<"Maximum marks : "<<max<<endl;
            cout<<"Minimum marks : "<<min<<endl;
            cout<<"Grade scored : "<<grade<<endl;
        }
}; 

int main()
{
    result r1; 
    r1.display();
    return 0; 
}
