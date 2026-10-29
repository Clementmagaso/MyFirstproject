#include <iostream>
#include <string>
using namespace std;
int main() {
    int* pInteger = new int;
    string* pString = new string;

    cout << "Enter an integer: "; 
    cin >> *pInteger;

    cin.ignore(); // Ignore the newline character left in the input buffer
    cout << "Enter an integer: ";
    cin >> *pInteger;
    cin.ignore(); // Ignore the newline character left in the input buffer

    cout << "Enter a string: ";
    getline(cin, *pString);

    cout << "Value of the dynamically allocated integer: " << *pInteger << endl;
    cout << "Value of the dynamically allocated string: " << *pString << endl;

    delete pInteger;
    delete pString;

    return 0;
}