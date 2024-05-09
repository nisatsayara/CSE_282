/*Write a C++ program to subtract two complex numbers.*/
#include<iostream>
using namespace std;

struct complexnumbers
{
    float real, imaginary;
}c1, c2, subtract;

int main()
{
    cout<<"Enter the first number: "<<endl;
    cout<<"Enter real part: ";
    cin>>c1.real;
    cout<<"Enter imaginary part: ";
    cin>>c1.imaginary;

    cout<<"Enter the second number: "<<endl;
    cout<<"Enter real part: ";
    cin>>c2.real;
    cout<<"Enter imaginary part: ";
    cin>>c2.imaginary;

    subtract.real = c1.real - c2.real;
    subtract.imaginary = c1.imaginary - c2.imaginary;

    if(subtract.imaginary<0)
    {
        cout<<"Subtraction of two complex numbers = "<<subtract.real<<subtract.imaginary<<"i"<<endl;
    }
    else
    {
        cout<<"Subtraction of two complex numbers = "<<subtract.real<<"+"<<subtract.imaginary<<"i"<<endl;
    }
}
