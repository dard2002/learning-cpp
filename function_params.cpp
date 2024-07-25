#include <iostream>
#include <string>

using namespace std;

void swapNames(string &name1, string &name2) {
    // name3 stores name1's value
    string name3 = name1;

    // Swap names
    name1 = name2;
    name2 = name3;

    // Output value of names to the screen
    cout << "name1 is: " << name1 << " and name2 is: " << name2 << endl;
}

void copyNames(string &name1, string &name2) {
    // name1 will become name1 and name2
    name2 = name1;
    cout << "name1 is: " << name1 << " and name2 is: " << name2 << endl;
}

void swapNamesWithPointers(string* name1, string* name2) {
    string* name3 = name1;

    name1 = name2;
    name2 = name3;

    cout << "name1 is: " << *name1 << " and name2 is: " << *name2 << endl;
}

int main() {
    string name1 = "Dylan";
    string name2 = "Bob";

    string* name1ptr = &name1;
    string* name2ptr = &name2;

    swapNamesWithPointers(name1ptr, name2ptr);
    swapNames(name1, name2);
    copyNames(name1, name2);
}