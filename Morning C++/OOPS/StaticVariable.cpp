#include <iostream>
using namespace std;
class StaticExample
{
    public:
        static int count;
        int count1;
    StaticExample()
    {
        cout<<endl<<"This is statioc example constructor";
    }

    ~StaticExample()
    {
        cout<<endl<<"Teh distructor called";
    }
};
int StaticExample::count=4;
int main() 
{
    StaticExample obj;
    cout<<endl<<
    obj.count;
    cout<<endl<<StaticExample::count;
    cout<<endl<<"The count instance variable is : "<<obj.count1;

    return 0;
}