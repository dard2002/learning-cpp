#include <iostream>
#include <string>

using namespace std;

int main() {
    // Create Pointers
    string name = "Dylan";
    string* nameAddress = &name;

    // Prints memory address of name (as the nameAddress variable)
    cout << nameAddress << endl;

    // Dereferencing, get the value (should print Dylan)
    cout << *nameAddress << endl;

    // Modify pointers, which will also change the original variable
    *nameAddress = "Bob";

    // Outputs name: Bob name2: Bob
    cout << "name: " << name << " name2: " << *nameAddress << endl;
}