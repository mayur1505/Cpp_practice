//write a code to make negative of complex number


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
        complex operator -()
        {
            complex temp;
            temp.a=-a;
            temp.b=-b;
            return(temp);

        }
};

int main()
{
    complex c1, c2;
    c1.set_data(3,4);
    c2=-c1;
    c2.show_data();
}