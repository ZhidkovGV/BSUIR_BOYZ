#include <iostream>

using namespace std;

int main () {
    int* some_array;
    int length = 0;
    bool is_dynamic;
    int array_element_sum = 0;

    cout << "Input 1 if you want dynamic array or 0 if you want static one" << endl;
    cin >> is_dynamic;

    if (is_dynamic) {
        cout << "Input length of your array" << endl;
        cin >> length;
         some_array = new int[length];
    } else {
        some_array = new int [10];
    }
    for (int i = 0; i < (length ? length : 10); i++) {
        cout << "input " << i << " element of array" << endl;
        cin  >> some_array[i];
    }
    for (int i = 0; i < (length ? length : 10); i++) {
        array_element_sum += some_array[i];
    }
    cout << "array_element_sum of all array numbers is: " << array_element_sum << endl;
    delete[] some_array;
    return 0;
}

