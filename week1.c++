#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    float cgpa;
    bool hasBacklogs;
    std::string majorOrMinor;
    bool eligibleForPlacement;

public:
    Student(const std::string& name, int age, float cgpa, bool hasBacklogs)
        : name(name), age(age), cgpa(cgpa), hasBacklogs(hasBacklogs) {
        majorOrMinor = (age > 18) ? "Major" : "Minor";
      
        eligibleForPlacement = (cgpa >= 8.0 && !hasBacklogs);
        }
    void display() const {
        std::cout << "Student(name=" << name
                  << ", age=" << age
                  << ", CGPA=" << cgpa
                  << ", Major/Minor=" << majorOrMinor
                  << ", Eligible for Placement=" << (eligibleForPlacement ? "Yes" : "No")
                  << ")" << std::endl;
    }
};
int main() {
    Student student1("Lakshmi", 21, 8.35, false);  
    Student student2("Lucky", 22, 7.5, true);   
    Student student3("Jaanu", 27, 9.4, false);   
    Student student4("Akhila", 24, 7.9, false);    

    student1.display(); 
    student2.display();  
    student3.display();  
    student4.display();

    return 0;
}
