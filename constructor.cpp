//write a code which will be using constructor


#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:
        complex (int x , int y) //parametrized constructor
        {
            a=x;
            b=y;
        }
        complex (int k) //parametrized constructor
        {
            a=k;
        }
        complex ()  //dafault constructor
        {
            a=0;
            b=0;
        }
        complex (complex &c)  //copy constructor
        {
            a=c.a;
            b=c.b;
        }
};

int main()
{
    complex c1(3,4), c2, c3(5), c4(c1);

}