#include <iostream>

using namespace std;

int main () {
    int some_number = 0;
    cin >> some_number;
    if (some_number != 0) {
        cout << "You changed number!" << endl;
    } else {
        cout << "Number is still zero!" << endl;
    }
    return 0;
}

