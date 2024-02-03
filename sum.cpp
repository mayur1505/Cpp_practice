#include<iostream>
using namespace std;

int sum(int, int);
int main()
{
    int a,b,s;
    cout<<"Enter two values"<<endl;
    cin>>a>>b;
    s=sum(a,b);
    cout<<"The sum of two numbers entered is = "<< s;
    return 0;
}

int sum(int x, int y)
{
    return(x+y);
}
