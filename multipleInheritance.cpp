//cpp program to demonstrate multiple inheritance
#include <iostream>
using namespace std;
class Base1 {
public:
    void display() {
        cout << "Base1 class display function called." << endl;
    }
};
class Base2 {
public:
    void display() {
        cout << "Base2 class display function called." << endl;
    }
};  
class Derived : public Base1, public Base2 {
public:


    void display() {
        cout << "Derived class display function called." << endl;
        Base1::display(); // Call Base1's display
        Base2::display(); // Call Base2's display
    }
};
int main() {
    Derived obj;
    obj.display(); // Call the display function of Derived class
    return 0;
}

    