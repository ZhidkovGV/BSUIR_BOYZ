#include <iostream>

using namespace std;

int main () {
    int length = 10;
    int** matrix = new int* [length];

    for (int i = 0; i < length; i++) {
        matrix[i] = new int[length];
    }

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            matrix[i][j] = sqrt(pow((i - j), 2));
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < length; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

