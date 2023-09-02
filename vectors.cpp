#include<iostream>
#include <vector>

void printList(std::vector<int> arr);

int main()
{
  // std::vector<int> numbers(5);

  // numbers[0] = 111;
  // int i = numbers[2];
  // numbers[1] = numbers[4];

  // std::cout << numbers[0] << " ";
  // std::cout << numbers[1] << " ";
  // std::cout << numbers[2] << " ";
  // std::cout << numbers[3] << " ";
  // std::cout << numbers[4] << " ";

  // int sum = 0;

  // for(int i = 0; i < 5; i++)
  //     sum += numbers[i];

  // std::cout << "\n";
  // std::cout << sum << "\n";

  // Reverse array
  int rand[5] = {1, 2, 3, 4, 6};
  int loopTracker = 0;
  std::vector<int> numbers(5);
  std::vector<int> reversedNumbers(5);

  for (int i = 1; i <= 5; i++)
  {
    numbers.push_back(rand[i]);
  }

  for (int i = 4; i >= 0; i--)
  {
    std::cout << i << "\n";
    reversedNumbers.push_back(rand[i]);
  }

  printList(reversedNumbers);
  return 0;
}


void printList(std::vector<int> arr){
for (auto i = arr.cbegin(); i != arr.cend(); ++i)
  std::cout << *i << " ";
}