/*Write a C++ program to store and print the roll no., name, age, and marks of a student using structures.*/
#include<iostream>
using namespace std;

struct student
{
    char name[50];
    int age, roll_no;
    float marks;
}s1;

int main()
{
    cout<<"Enter the name of the student: ";
    cin.get(s1.name, 50);
    s1.age = 15;
    s1.roll_no = 5;
    s1.marks = 100;

    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"Roll no: "<<s1.roll_no<<endl;
    cout<<"Marks: "<<s1.marks;

    return 0;
}
