#include <iostream>

using namespace std;

int main () {
    int dick_size = 0;
 
    cin >> dick_size;

    if (dick_size <= 0) {
        cout << "Dick size cant be below or equal to zero" << endl;
    } 
    else {   
        switch (dick_size) {
            case 5: cout << "Korean Giant" << endl;
                     break;
            case 10: cout << "Angry Russian" << endl;
                     break;
            case 15: cout << "Nice Guy" << endl;
                     break;
            case 25: cout << "Happy chicken lover(tolerance)" << endl;
                     break;
            default: cout << "I cant understand that size of dick";
        }
    }
    return 0;
}