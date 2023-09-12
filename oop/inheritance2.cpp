#include <iostream>
#include <cmath>

class Shape{
  public:
    double area;
    double volume;
    double PI = 3.14159;
};

class Cube: public Shape{
public:
  double side;
  Cube(double side){
    this->side = side;
    this->area = computeArea(side);
    this->volume = computeVolume(side);
  }

  double computeArea(double side){
    return side * side * 6;
  }

  double computeVolume(double side){
    return side * side * side;
  }
};

class Sphere : public Shape{
public:
  double radius;
  Sphere(double radius){
    this->radius = radius;
    this->area = computeArea(radius);
    this->volume = computeVolume(radius);
  }

  double computeArea(double radius){
    return 4 * this->PI * pow(radius,2);
  }

  double computeVolume(double radius){
    return (4 / 3.0) * this->PI * pow(radius, 3);
  }
};

int main(){
  Cube cube(10);
  Sphere sphere(4);

  std::cout << "The cube has an area " << cube.area << " volume " << cube.volume << std::endl;
  std::cout << "The sphre has an area " << sphere.area << " volume " << sphere.volume << std::endl;
  return 0;
}