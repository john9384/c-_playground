#include <iomanip>
#include <iostream>

int main()
{
  std::string text= "My name";
  int age = 21;
  std::string sampleArr[5] = {"Pizza", "Chef"};

  std::string *pText = &text;
  int *pAge = &age;
  std::string *pSampleArr = sampleArr;

  std::cout << *pText << " " << *pAge << "\n";
  std::cout << *pSampleArr << "\n";


  // Null pointers
  int *pRand = nullptr;
  int x = 123;

  pRand = &x;

  if(pRand == nullptr){
    std::cout << "pointer is not assigned \n";
  }else{
    std::cout << "pointer assigned \n";
    std::cout << *pRand << "\n";
  }

  return 0;
}  