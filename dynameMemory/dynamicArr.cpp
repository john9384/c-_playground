#include <iostream>

int main(){
  std::string *pNames = NULL;
  int size;

  std::cout << "How many names to enter in?: ";
  std::cin >> size;

  pNames = new std::string[size];

  for (int i = 0; i < size; i++){
    std::cout << "Enter name " << i + 1 << " => ";
    std::cin >> pNames[i];
  }

  for (int i = 0; i < size; i++){
    std::cout << pNames[i] << std::endl;
  }

  delete[] pNames;

  return 0;
}