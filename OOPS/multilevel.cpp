// ex :4 multi level inheritance    emp  , manager , ceo 

#include<iostream>
using namespace std;

class emp
{
    protected:
        int salary;
    public:
        string name;

    emp(string n,int s)
    {
        name = n;
        salary = s;
    }
    void employee()
    {
        cout << "\nSalary : " << salary;
        cout << "\nName : " << name;
    }
};

class manager : public emp
{
    private:
        int id;
    public:
        manager(string n,int s,int i) : emp(n,s)
        {
            id = i;
        }
};

class ceo : public manager
{
    protected:
        int id; 
    public:
        ceo(string n,int s,int i) : manager(n,s,i)
        {
            this->id = i;
            cout << "\nCEO Name : " << name;
            cout << "\nCEO Salary : " << salary;
        }
    void display()
    {
        cout << "\nCEO ID : " << id;
    }
};

int main()
{
    ceo c("Dishanth Shah", 100000 , 1);
    c.display();
    return 0;
}