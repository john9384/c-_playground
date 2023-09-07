#include <iostream>

int main(){
  int *pNum = NULL;
  pNum = new int;
  *pNum = 21;

  std::cout << "address: " << pNum << '\n';
  std::cout << "value: " << *pNum << '\n';

  // Clear the used memory
  delete pNum;

  return 0;
}