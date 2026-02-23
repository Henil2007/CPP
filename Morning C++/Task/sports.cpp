#include <iostream>
using namespace std;
class Academic
{
    float marks;

    public:
        void getAcademicData()
        {
            cout<<"Enter Marks (out of 100) : ";
            cin>>marks;
        }
        void showAcademicData()
        {
            cout<<"Academic Marks : "<<marks<<endl;
        }
        float getMarks()
        {
            return marks;
        }
};
class Sports
{
    float score;

    public:
        void getSportsData()
        {
            cout<<"Enter Sports score (out of 100) : ";
            cin>>score;
        }
        void showSportsData()
        {
            cout<<"Sports score : "<<score<<endl;
        }
        float getScore()
        {
            return score;
        }
};
class Result : public Academic , public Sports
{
    private:
    float total;
    float percentage;

    public:
        void CalculateResult()
        {
            total = getMarks() + getScore();
            percentage = (total/200)*100;
        }
        void displayResult()
        {
            showAcademicData();
            showSportsData();
            cout<<"Total : "<<total<<endl;
            cout<<"Percentage : "<<percentage<<"%"<<endl;
        }
};
int main() 
{
    Result R;

    R.getAcademicData();
    R.getSportsData();

    R.CalculateResult();
    cout<<endl<<"----------Final Result-----------"<<endl;
    R.displayResult();
    return 0;
}