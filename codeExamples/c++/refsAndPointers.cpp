#include <iostream>

using namespace std;

int main () {
   int some_number = 0;

   int& some_value_in_memory = some_number;
   int* some_number_adress = &some_number;
 
   cout << some_number_adress << " : " << some_value_in_memory << endl;

   return 0;
}

