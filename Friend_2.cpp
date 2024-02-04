//write a code to use friend function for addition of two numbers from two different classes


#include<iostream>
using namespace std;
class B;
class A
{
    private:
        int a;
    public:

        void set_data(int x)
        {a=x;}
        friend void add(A,B);
};

class B
{
    private:
        int b;
    public:

        void set_data(int y)
        {b=y;}
        friend void add(A,B);
};

void add(A o1, B o2)
{
    cout<<"The sum of two digits is "<<o1.a+o2.b;
        
}

int main()
{
    A v1;
    B v2;
    v1.set_data(2);
    v2.set_data(5);
    add(v1,v2);
}