//function overloading
//write a code which can give area of rectangle and circle
#include<iostream>
using namespace std;

int area(int, int);
float area(int);

int main()
{
    int a,l,b,r;
    float ar;
    cout<<"Give the values of length and breadth of rectangle"<<endl;
    cin>>l>>b;
    a=area(l,b);
    cout<<"The area of rectangle is "<<a<<endl;
    cout<<"Give the value of radius to calculate area of circle"<<endl;
    cin>>r;
    ar=area(r);
    cout<<"The area of Circle is "<<ar<<endl;

}

int area(int l, int b)
{
    return(l*b);
}

float area(int r)
{
    return (3.14*r*r);
}