#include<iostream>
using namespace std;


string returnWelcomeNote(string name, int age);
int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);


int main()
{

  // string name;
  // int age;

  // cout << "Input your name => ";
  // cin >> name; 

  // cout << "Input your age => ";
  // cin >> age; 

  // string returnText = returnWelcomeNote(name, age);
  // cout << returnText;

  int firstSum = sum(2, 3);
  double secondSum = sum(3000000, 30000000);
  float thirdSum = sum(3.2, 2.2, 4.6);

  cout << firstSum << endl;
  cout << secondSum << endl;
  cout << thirdSum << endl;

  return 0;
}

string returnWelcomeNote(string name, int age){
  string text = "My name is " + name + " with age " + to_string(age);
  return text;
}


int sum(int a, int b){
  return a + b;
}

double sum(double a, double b){
  return a + b;
}

float sum(float a, float b, float c){
  return a + b + c;
}