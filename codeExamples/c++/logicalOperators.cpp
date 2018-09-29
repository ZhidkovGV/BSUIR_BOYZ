#include <iostream>

using namespace std;

int main () {
    bool some_true_value = true;
    bool some_false_value = false;

    cout << "some_true_value || some_false_value is " << (some_true_value || some_false_value ? "true" : "false") << endl; 
    cout << "some_false_value || some_true_value is " << (some_false_value || some_true_value ? "true" : "false") << endl;
    cout << "some_false_value && some_true_value is " << (some_false_value && some_true_value ? "true" : "false") << endl;
    cout << "!some_false_value is " << (!some_false_value ? "true" : "false") << endl;
    cout << "!some_true_value is " << (!some_true_value ? "true" : "false") << endl;
    return 0;
}

