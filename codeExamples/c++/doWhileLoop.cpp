#include <iostream>

using namespace std;

int main () {
   bool should_loop_end = true;
   cin >> should_loop_end;
   do {
       cout << "Do you want loop to continue?";
       cin >> should_loop_end;
   } while (should_loop_end);
   return 0;
}

