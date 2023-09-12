#include <iostream>

class Student{
  public:
    std::string name;
    int age;
    double gpa;
    Student(std::string name, int age, double gpa){
      this->name = name;
      this->age = age;
      this->gpa = gpa;
    }

    void printStudent(){
      std::cout << "=========== Student Bio ============= \n";
      std::cout << "Student Name => " << this->name << '\n';
      std::cout << "Student Age => " << this->age << '\n';
      std::cout << "Student GPA => " << this->gpa << '\n';
      std::cout << "====================================== \n";
      std::cout << std::endl;
    }
};

int main()
{
    Student student1("Spongebob", 17, 2.2);
    Student student2("Patrick", 20, 2.2);

    student1.printStudent();
    student2.printStudent();

    return 0;
}