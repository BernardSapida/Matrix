#include <iostream>
using namespace std;

void displayMatrix(int size) {
    int matrix[3][3];
    int data;

    for (int i = 0; i < size; i++) {
        for (int k = 0; k < size; k++) {
            cout << "Enter data: ";
            cin >> data;

            matrix[i][k] = data;
        }
    }

    cout << "\n======================\n";
    cout << "Matrix: " << endl;

    for (int i = 0; i < size; i++) {
        for (int k = 0; k < size; k++) {
            cout << matrix[i][k] << " ";
        }
        cout << endl;
    }
}

int getMatrixSize() {
    int choice;

    cout << "[1] 2x2 matrix" << endl;
    cout << "[2] 3x3 matrix" << endl;
    cout << "Choice: ";
    cin >> choice;
    cout << "\n======================\n";
    if (choice == 1) return 2;
    if (choice == 2) return 3;
}

int main()
{
    displayMatrix(getMatrixSize());
    return 0;
}