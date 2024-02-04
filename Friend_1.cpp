//write a code to use friend function for addition of complex number 


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
        complex add(complex c)
        {
            complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return(temp);

        }
        friend void fun(complex);
};

void fun(complex c)
{
    cout<<"The sum of two digits of complex number is "<<c.a+c.b;
        
}

int main()
{
    complex c1, c2, c3;
    c1.set_data(3,4);
    fun(c1);
}