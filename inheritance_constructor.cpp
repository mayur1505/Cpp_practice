//example of inheritance, use constructor




#include<iostream>
using namespace std;
class A
{
    int a;
    public:
        A(int k)
        {a=k;}

};

class B : public A
{
    int b;
    public:
        B(int x, int y):A(x)
        {
            b=y;
        }

};

int main()
{   
    B obj(2,3);
    return 0;
}
