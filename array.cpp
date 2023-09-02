#include<iostream>
using namespace std;

double getTotal(double prices[], int array_size);
int searchArray(int array[], int size, int element);

int main()
{
  // string cars[] = {"Mustang", "Ferari"};
  // int age[] = {2, 3, 4};
  // std::cout << age[2] << endl;
  // age[2] = 5;
  // std::cout << age[2] << endl;
  // std::cout << cars[1] << endl;

  // double gpa = 2.5;
  // std::string name = "Bayo";
  // char cc = 'c';
  // bool stud = true;
  // std::cout << sizeof(cc) << " bytes" << endl;

  // std::string students[] = {"Bruce", "Clark", "Diana", "Patrick"};
  // for (int i = 0; i < sizeof(students)/sizeof(std::string); i++){
  //   std::cout << students[i] << " ";
  // }
  // for(std::string student: students){
  //   std::cout << student << " ";
  // }

  //   return 0;

  // double prices[] = {40.99, 1.2, 75, 9.99};
  // double total = getTotal(prices, sizeof(prices)/sizeof(double));

  // std::cout << total;

  int numbers[] = {1, 2, 3, 4, 5, 6, 7};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  int index;
  int myNum;

  std::cout << "Enter element to search for: " << endl;
  std::cin >> myNum;

  index = searchArray(numbers, size, myNum);

  if(index != -1){
    std::cout << ">>>>>>>> Index of you number is " << index;
  }else{
    std::cout << "The number does not exist";
  }

  return 0;
}

double getTotal(double prices[], int array_size){
  double total = 0;

  for (int i; i < array_size; i++){
    total += prices[i];
  }

  return total;
}

int searchArray(int array[], int size, int element){
  for (int i = 0; i < size; i++){
    if(array[i] == element){
      return i;
    }
  }

  return -1;
}