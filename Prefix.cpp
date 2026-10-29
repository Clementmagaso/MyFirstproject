#include <iostream>
using namespace std;
int main() {
int x = 3;
//the value of x is increased before the value of x is assigned to y
//hence
int y = ++x; //increment x and assign the result to y
cout << "x: " << x << endl;
cout << "y: " << y << endl;

return 0;
}