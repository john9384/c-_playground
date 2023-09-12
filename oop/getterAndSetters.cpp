#include <iostream>

class Stove{
  private:
    int temperature = 0;

  public:
    int getTemperature(){
      return temperature;
    }
    void setTemperature(int temp){
      if(temp < 0){
      this->temperature = 0;
      }
      else if(temp > 100){
        this->temperature = 100;
      }
      else{
        this->temperature = temp;
      }
    }
};

int main(){

  Stove stove;

  stove.setTemperature(1000);
  std::cout << "Temperature is " << stove.getTemperature() << '\n';

  stove.setTemperature(5);
  std::cout << "Temperature is " << stove.getTemperature() << '\n';

  return 0;
}