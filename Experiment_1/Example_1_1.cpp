/*Example 1: Write a C++ to define a structure.*/
#include<iostream>
using namespace std;

struct Person
{
    char name[50];
    int citNo;
    float salary;
}person1;

int main()
{
    cout<<"Enter full name:";
    cin.get(person1.name, 50);
    person1.citNo = 1985;
    person1.salary = 2500;

    cout<<"Name: "<<person1.name<<endl;
    cout<<"Citizenship No: "<<person1.citNo<<endl;
    cout<<"Salary: "<<person1.salary;

    return 0;
}
