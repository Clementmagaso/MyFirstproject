#include <iostream>

using namespace std;

int main() {

int firstVa1ue;
int secondVa1ue;
int * pPointer = nullptr;

// assign pointer with the address of firstVa1ue
pPointer = &firstVa1ue;
*pPointer = 10; // Indirection
//assign pointer with the address of secondVa1ue
pPointer = &secondVa1ue;
*pPointer = 20; // Indirection
cout << "firstVa1ue is " << firstVa1ue << endl;
cout << "secondVa1ue is " << secondVa1ue << endl;
return 0;
}