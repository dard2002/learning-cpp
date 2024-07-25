#include <iostream>
#include <string>

using namespace std;

int main() {
    // References
    string str1 = "Hello";
    string &str2 = str1; // Assigns the reference of str2 to str1

    // Prints Hello Hello
    cout << str1 << " " << str2 << endl;

    // Memory Addresses - should be the same
    cout << "str1: " << &str1 << "\nstr2: " << &str2 << endl;
}