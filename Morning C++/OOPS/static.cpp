#include <iostream>
using namespace std;
class Shape
{
    private:
        int length , breadth , radius;
        public:
            static int count;

        Shape()
        {
            cout<<endl<<"The constructor is initialised";
            length=23;
            breadth=55;
            radius=44;
        }
        static void counter();
};
int Shape::count;
void Shape::counter()
{
    count++;
    cout<<endl<<"The object crea6ed is this "<<count;
}
int main() 
{
    Shape triangle;
    Shape rectangle;
    Shape square;
    triangle.counter();
    Shape::counter();
    cout<<triangle.count;
    return 0;
}