#include <iostream>

using namespace std;

int count_factorial(int number) {
    for (int i = (number - 1); i > 1; i--) {
        number = number * i;
    }
    return number;
}
int count_factorial_recursive(int number) {
    if (number > 1) {
        number = number * count_factorial_recursive(number -1);
    }
    return number;
}
int main () {
    int number = 1;
    cin >> number;
    cout << "recursive function result: " << count_factorial_recursive(number) << endl;
    cout << "interable function result: " << count_factorial(number) << endl;
    return 0;
}

