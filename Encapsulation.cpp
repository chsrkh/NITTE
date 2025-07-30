//cpp prog to demonstrate encapsulation
#include <iostream>
using namespace std;
class EncapsulatedClass {
private:
    int privateData; // Private member variable
public:
    // Constructor to initialize privateData
    EncapsulatedClass(int data) : privateData(data) {}

    // Getter function to access privateData
    int getPrivateData() const {
        return privateData;
    }

    // Setter function to modify privateData
    void setPrivateData(int data) {
        privateData = data;
    }
};
int main() {
    EncapsulatedClass obj(10); // Create an object with initial data

    // Accessing private data through getter
    cout << "Initial private data: " << obj.getPrivateData() << endl;

    // Modifying private data using setter
    obj.setPrivateData(20);
    cout << "Modified private data: " << obj.getPrivateData() << endl;

    return 0;
}