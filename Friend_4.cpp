//write a code to make negative of complex number using overloading of unary oparator as friend function


#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:

        void set_data(int x, int y)
        {a=x;b=y;}
        void show_data()
        {cout<<"\na = "<<a<<", b = "<<b;}
        friend complex operator -(complex);
};
        complex operator -(complex x)
        {
            complex temp;
            temp.a=-x.a;
            temp.b=-x.b;
            return(temp);

        }

int main()
{
    complex c1, c2;
    c1.set_data(3,4);
    c2=-c1;
    c2.show_data();
}