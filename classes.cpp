#include <iomanip>
#include <iostream>
#include<list>

using namespace std;


class Animal{
  public:
    string name;
    string family;
    string sound;
    int  legs;
    list<string> breeds;

    Animal(string animalName, string animalFamily, string animalSound){
      name = animalName;
      family = animalFamily;
      sound = animalSound;
    }

    void makeSound()
    {
      cout << name << " " << sound << endl;
    }

    void showAnimalBio(){
      cout << name << endl;
      cout << family << endl;
      cout << sound << endl;
      cout << legs << endl;
      if(breeds.size() > 0){
        cout << "should not get here" << endl;
        for (string breed : breeds)
        {
          cout << breed << " ";
        }
      }
    }
};

int main()
{
    Animal Dog("Dog", "Mammal", "bark");
    Dog.legs = 4;
    // Dog.breeds = {"German Shepard", "Rotweiler"};

    // Dog.makeSound();

    Dog.showAnimalBio();
    cout << "Still works";

    return 0;
}