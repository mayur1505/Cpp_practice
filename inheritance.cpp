//example of inheritance, make parent class: shape and derived class: rectangle




#include<iostream>
using namespace std;
class shape
{
    protected:
        int width,height;
    public:
        void set_width(int x)
        {width=x;}
        void set_height(int y)
        {height=y;}

};

class rectangle : public shape
{   
    
    public:
        int area()
        {
            return(width*height);
        }
};

int main()
{   
    int ar;
    rectangle rect;
    rect.set_height(7);
    rect.set_width(4);
    ar=rect.area();
    cout<<"The area is = "<<ar;
    return 0;
}
