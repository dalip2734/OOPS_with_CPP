// abstraction

#include <iostream>

using namespace std;

// abstract class
class AbstractEmployee
{
    virtual void AskForPromotion() = 0; // obligatory by making it pure virtual func
};
class Employee : AbstractEmployee
{
private:
    string Name;
    string Company; // by default private
    int Age;

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

int main()
{
    Employee employee1 = Employee("Dalip", "Google", 22);
    Employee employee2 = Employee("Raj kumar", "Amazon", 39);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
}
