//Cpp prog to demonstrate data abstraction
#include <iostream>
using namespace std;
class AbstractClass {
public:
    // Pure virtual function
    virtual void display() = 0; // This makes the class abstract
};
class ConcreteClass : public AbstractClass {
public:
    // Implementation of the pure virtual function
    void display() override {
        cout << "Display function of ConcreteClass called." << endl;
    }
};
int main() {
    ConcreteClass obj; // Create an object of ConcreteClass
    obj.display(); // Call the display function
    return 0;
}
