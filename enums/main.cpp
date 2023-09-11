#include <iostream>

enum Day
{
  SUNDAY = 0, 
  MONDAY = 1,
  TUESDAY = 2,
  WEDNESDAY = 3,
  THURSDAY = 4,
  FRIDAY = 5,
  SATURDAY = 6
};

int main(){
  Day today = SUNDAY;

  switch(today){
    case SUNDAY:
      std::cout << "It is sunday! \n";
      break;
    case MONDAY:
      std::cout << "It is monday! \n";
      break;
    case TUESDAY:
      std::cout << "It is tuesday! \n";
      break;
    case WEDNESDAY:
      std::cout << "It is wednesday! \n";
      break;
    case THURSDAY:
      std::cout << "It is thursday! \n";
      break;
    case FRIDAY:
      std::cout << "It is friday! \n";
      break;
    case SATURDAY:
      std::cout << "It is saturday! \n";
      break;

    default:
      std::cout << "Day not listed yet \n";
      break;
    }

  return 0;
}