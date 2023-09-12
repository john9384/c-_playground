#include <iostream>

class Human{
  public:
    std::string name = "Human Name";
    std::string occupation = "Human Job";
    int age = 0;
    void eat(){
      std::cout << "This person is eating \n";
    }
    void drink(){
      std::cout << "This person is drinking \n";
    }
    void sleep(){
      std::cout << "This person is sleeping \n";
    }
};

int main()
{
    Human human1;
    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 30;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    Human human2;
    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';
    return 0;
}