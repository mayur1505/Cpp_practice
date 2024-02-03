#include<iostream>
using namespace std;
int main()
{
    void fun(); //function declaration
    cout<<"you are in main"<<endl; 
    fun();
    return 0;
}

void fun()
{
    cout<<"You are in fun";
}
