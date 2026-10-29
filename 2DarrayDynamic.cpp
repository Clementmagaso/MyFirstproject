#include <iostream>
using namespace std;
int main() {
    int rows, columns;
    cout << "Enter the number of rows (max 3): ";
    cin >> rows;

    while (rows < 1 || rows > 3) {
        cout << "Invalid input. Please enter a number between 1 and 3: ";
        cin >> rows;
    }
    cout << "Enter the number of columns (max 3): ";
    cin >> columns;
    while (columns < 1 || columns > 3) {
        cout << " columns must be between 1 and 3. Please enter again: ";
        cin >> columns;
    }

    double** array = new double*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new double[columns];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}