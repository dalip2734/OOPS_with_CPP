#include <iostream>
using namespace std;

// abstract class
class AbstractEmployee
{
    virtual void AskForPromotion() = 0; // obligatory by making it pure vi
};
class Employee : AbstractEmployee
{
    // private:
    // string Name;
    string Company; // by default private
    int Age;

protected:
    string Name;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if (age >= 18)
            Age = age;
    }
    int getAge()
    {
        return Age;
    }
    void IntroduceYourself() {}
    // constructor
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion()
    {
        if (Age > 30)
            cout << Name << " got promoted. " << endl;
        else
            cout << "Sorry," << Name << " No promotion for you." << endl;
    }
};

// derived class developer
class Developer : public Employee
{
public:
    string FavProgrammingLanguage;
    // constructor
    Developer(string name, string company, int age, string favProgrammingLanguage) : Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug()
    {

        cout << Name << " fixed bug using " << FavProgrammingLanguage << "." << endl;
    }
};
// derived class Teacher
class Teacher : public Employee
{
public:
    string Subject;
    void PrepareLesson()
    {
        cout << Name << " is preparing " << Subject << " lesson ." << endl;
    }
    // constructor
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }
};

int main()
{ // creating objects of Teacher and Developer derived class
    Developer d = Developer("Dalip", "Google", 22, "C++");
    Teacher t = Teacher("Krishna", "skillup", 31, "Networking");
    t.PrepareLesson();
    t.AskForPromotion();
}
