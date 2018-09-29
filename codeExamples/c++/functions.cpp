#include <iostream>

using namespace std;

void output_message (char* message, int value = 0) {
    cout << message << value << endl;
}
void double_number_by_ref (int& number) {
    number = number * 2;
}

int double_number (int number) {
    return number * 2;
}

int main () {
    int some_number = 5;
    int& ref_to_some_number = some_number; 
    int some_numbers[] = [1, 2, 3, 4, 5];
    output_message("we have some int varieble with value ", some_number);
    int doubled_number = double_number(some_number);
    output_message("now we created new varieble, and its value: ", doubled_number);
    output_message("value of old varrieble is: ", some_number);
    double_number_by_ref(ref_to_some_number); 
    output_message("some_number now is: ", some_number);
    return 0;
}

