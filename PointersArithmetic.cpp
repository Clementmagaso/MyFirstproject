#include <iostream>
using namespace std;
int main() {
//nuII pointer
int* pPointer = nullptr;
int numbersArray[3] = {10, 20, 30};
// assign
pPointer = numbersArray;
//output
cout << "Address at pPointer: " << pPointer << endl;
cout << "Address of numbersArray[0]: " << &numbersArray[0] << endl;
//output
cout << "Value at ppointer: " << *pPointer << endl;
//address Of first element to pointer
pPointer = numbersArray;
//the address of the first element
cout << "Address at pPointer: " << pPointer << endl;
cout << "Address of numbersArray[0]: " << &numbersArray[0] << endl;
// value Of the first element using the pointer and indirection
cout << "Value at ppointer: " << *pPointer << endl;
// This outputs the value of the second element
cout << "Value at ++pPointer: " << *(++pPointer) << endl;
//assign address Of first element to pointer
pPointer = numbersArray;
// This outputs the value of the first element
cout << "Value at ppointer: " << *pPointer << endl;
return 0;
}