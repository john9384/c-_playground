#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

// Luhn's Algorithm
int main(){
  std::string cardNumber = "5199111210619057";
  int result = 0;

  // std::cout << "Enter a credit card number: ";
  // std::cin >> cardNumber;

  result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

  if(result%10 == 0){
    std::cout << "The card is a valid card";
  }
  else{
    std::cout << "The card is not valid";
  }
  return 0;
}

int getDigit(const int number){

  return 0;
}

int sumOddDigits(const std::string cardNumber){
  int countTracker = 1;
  int sum = 0;

  for (int i = cardNumber.size() - 1; i >= 0; i--) {
    if((countTracker%2) == 1){
      sum +=  (cardNumber[i] - '0');
    }
    countTracker++;
  }
  return sum;
}

int sumEvenDigits(const std::string cardNumber){
  int countTracker = 1;
  int sum = 0;

  for (int i = cardNumber.size() - 1; i >= 0; i--) {
    if((countTracker%2) == 0){
    int doubleMultipleValue = (cardNumber[i]-'0') * 2;

      if(doubleMultipleValue >= 10) 
      {
        sum += doubleMultipleValue - 9;
      }
      else
      {
        sum += doubleMultipleValue;
      }
    }
    countTracker++;
  }

  return sum;
}