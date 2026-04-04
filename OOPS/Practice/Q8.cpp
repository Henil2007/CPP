/*
Que 8. Demonstrate the effect of public, protected, and private inheritance using suitable base and
derived classes. Include constructors in each class and show which members are accessible.
*/

#include <iostream>
using namespace std;

class Base {
public:
    int pub;
protected:
    int prot;
private:
    int priv;

public:
    Base() {
        pub = 1;
        prot = 2;
        priv = 3;
        cout << "Base Constructor\n";
    }
};
class DerivedPublic : public Base {
public:
    DerivedPublic() {
        cout << "DerivedPublic Constructor\n";
    }

    void show() {
        cout << "Public: " << pub << endl;     
        cout << "Protected: " << prot << endl;  
    }
};
class DerivedProtected : protected Base {
public:
    DerivedProtected() {
        cout << "DerivedProtected Constructor\n";
    }

    void show() {
        cout << "Public->Protected: " << pub << endl; 
        cout << "Protected: " << prot << endl;         
    }
};
class DerivedPrivate : private Base {
public:
    DerivedPrivate() {
        cout << "DerivedPrivate Constructor\n";
    }

    void show() {
        cout << "Public->Private: " << pub << endl;    
        cout << "Protected->Private: " << prot << endl; 
    }
};
int main() {
    DerivedPublic obj1;
    obj1.show();
    cout << obj1.pub << endl;  

    cout << "------------------\n";

    DerivedProtected obj2;
    obj2.show();

    cout << "------------------\n";

    DerivedPrivate obj3;
    obj3.show();

    return 0;
}