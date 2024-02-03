//the members of structure are by default public and class are private
//modify structure.cpp program, use class there and define set_data fun outside class


#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:
        void set_data(int, int);
        void show_data()
        {cout<<"\na = "<<a<<", b = "<<b;}
};
        void complex:: set_data(int x, int y)//membership label of class
        {
        a=x;
        b=y;
        }

int main()
{
    complex c1;
    c1.set_data(3,4);
    c1.show_data();
}

