#include <iostream>

using namespace std;

class Employee
{
public:
    string Name;
    string Company; // by default private
    int Age;

    void IntroduceYourself()
    {
        cout << "Name :" << Name << endl;
        cout << "Company :" << Company << endl;
        cout << "Age :" << Age << endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("Dalip", "Google", 22);
    employee1.IntroduceYourself();
    Employee employee2 = Employee("Raj Kumar", "Amazon", 21);
    employee2.IntroduceYourself();

    // default constructorm is a term to describe a constructor which automatically generate.
}