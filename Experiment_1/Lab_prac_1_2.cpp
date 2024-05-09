/*Write a C++ program to store roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2.*/
#include<iostream>
using namespace std;

struct student
{
    char name[50];
    int age, roll;
}s[5];

int main()
{
    cout<<"Enter the information of the 5 students: "<<endl;

    for(int i = 0; i < 5; i++)
    {
        s[i].roll = i + 1;
        cout<<"Roll number: "<<s[i].roll<<endl;

        cout<<"Enter name: ";
        cin>> s[i].name;

        cout<<"Enter age: ";
        cin>> s[i].age;

        cout<<endl;
    }

    cout<<"Displaying information of roll number 2: "<<endl;
    cout<<"Roll: "<<s[1].roll<<endl;
    cout<<"Name: "<<s[1].name<<endl;
    cout<<"Age: "<<s[1].age;

    return 0;
}
