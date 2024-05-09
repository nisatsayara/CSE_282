/*Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks, and phy_marks and then display the percentage of each student.*/
#include<iostream>
using namespace std;

struct Marks
{
    char name[50];
    int roll;
    float chem_marks, math_marks, phy_marks;
}s[5];

int main()
{
    cout<<"Enter the information of the students: "<<endl;

    for(int i = 0; i < 5; i++)
    {
        cout<<"Student No. "<<i+1<<":"<<endl;

        cout<<"Roll no: ";
        cin>>s[i].roll;

        cout<<"Name: ";
        cin>>s[i].name;

        cout<<"Marks in chemistry: ";
        cin>>s[i].chem_marks;

        cout<<"Marks in math: ";
        cin>>s[i].math_marks;

        cout<<"Marks in physics: ";
        cin>>s[i].phy_marks;

        cout<<endl;
    }

    for(int i = 0; i < 5; i++)
    {
        cout<<"Student no. :"<<i+1<<endl;
        float percentage = (((s[i].chem_marks)+(s[i].math_marks)+(s[i].phy_marks))/300)*100;
        cout<<"Percentage: "<<percentage<<endl;
        cout<<endl;
    }

    return 0;



}
