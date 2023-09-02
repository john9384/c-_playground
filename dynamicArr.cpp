#include <iomanip>
#include <iostream>
using namespace std;
int main(){

  int* myArr = new int[2];

  myArr[0] = 5;
  myArr[1] = 3;

  cout << &myArr << endl;

  return 0;
};