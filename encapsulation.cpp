// Encapsulation
/* 4 concepts of OOPS are:
1.encapulation
   bundling and tieing together data and methods prevent  access  of our class.
2.abstraction
3.inheritance
4.polymorphism
*/

#include <iostream>

using namespace std;

//abstract class
class AbstractEmployee {
     virtual void AskForPromotion()=0;   //obligatory by making it pure virtual function

};
class Employee:AbstractEmployee
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
    {   if(age>=18)
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
    void AskForPromotion(){
        if(Age>30)
          cout<< Name << "got promoted" <<endl;
        else
          cout<<"Sorry,No promotion for you";
    }
};

int main()
{
    Employee employee1 = Employee("Dalip","Google",22);
    employee1.IntroduceYourself();
    Employee employee2 = Employee("Raj kumar","Amazon",39);
    employee2.IntroduceYourself();

    employee2.setAge(22);
    cout << employee2.getName() << " is " << employee2.getAge() << " years old.";
    // default constructorm is a term to describe a constructor which automatically generate.
}


