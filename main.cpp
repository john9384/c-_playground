#include <iomanip>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
  // for(int i = 1; i <= 1000; i++){
  //   for(int j = 1; j <= 1000; j++){
  //     cout << i << " x " << j << " = " << i*j << endl;
  //   }
  //   cout << endl;
  // }

  // int height = 5;
  // int width = 4;
  // char val = '*';

  // for (int i = 1 ; i <= height; i++){
  //   for(int j = 1; j <= i; j++){
  //     cout << setw(5) << val ;
  //   }
  //   cout << endl;
  //   cout << endl;
  // }

  // for (int i = height; i > 0; i--) {
  //   for (int j = 1; j <= i; j++) {
  //     cout << setw(5) << val;
  //   }
  //   cout << endl;
  //   cout << endl;
  // }

  double x = 3;
  double y = 4;
  double z;
  string welcome = "You are welcome";

  z = std::pow(x, y);

  cout << welcome << endl;
  cout << z;

  return 0;
}