#include <iostream>

using namespace std;

int main () {
   bool should_loop_end = true;
   while (should_loop_end) {
       cout << "Do you want loop to continue?";
       cin >> should_loop_end;
   }
   return 0;
}
