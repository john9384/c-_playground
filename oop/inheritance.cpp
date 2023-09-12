#include <iostream>

class Animal{
  public:
    bool alive = true;
    void eat(){
      std::cout << "This animal is eating \n";
    }
};

class Dog : public Animal{
  public:
  void bark(){
      std::cout << "The dog goes woof! \n";
  }
};

class Cat : public Animal{
  public:
  void meow(){
      std::cout << "The cat goes meow! \n";
  }
};

int main(){
    Dog puppy;
    Cat kitten;

    std::cout << puppy.alive << '\n';
    puppy.eat();
    puppy.bark();

    std::cout << kitten.alive << '\n';
    kitten.eat();
    // kitten.bark();
    kitten.meow();

    return 0;
}