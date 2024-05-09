/*Write a C++ program to add two distances in inch-feet using structure.*/
#include<iostream>
using namespace std;

struct distance
{
    int feet;
    float inch;
}d1, d2, sum;

int main()
{
    cout<<"Enter information for first distance: "<<endl;
    cout<<"Enter feet: ";
    cin>>d1.feet;
    cout<<"Enter inch: ";
    cin>>d1.inch;

    cout<<"\nEnter information for second distance: "<<endl;
    cout<<"Enter feet: ";
    cin>>d2.feet;
    cout<<"Enter inch: ";
    cin>>d2.inch;

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    if(sum.inch > 12)
    {
        int extra = sum.inch / 12;

        sum.feet+= extra;
        sum.inch -= (extra * 12);
    }

    cout<<"\nSum of the two distances = "<<sum.feet<<" feet "<<sum.inch<<" inch ";

    return 0;


}
