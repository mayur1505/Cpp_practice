//write a code to implement operator overloading on opeartor ++(pre and post increment)


#include<iostream>
using namespace std;
class Integer
{
    private:
        int a;
    public:

        void set_data(int x)
        {a=x;}
        void show_data()
        {cout<<"\na = "<<a<<endl;}
        Integer operator ++()  //preincrement
        {
            Integer i;
            i.a=++a;
            return(i);  
        }
        Integer operator ++(int)  //postincrement
        {
            Integer i;
            i.a=a++;
            return(i);  
        }
        
};

int main()
{
    Integer i1, i2;
    i1.set_data(3);
    cout<<"before postincrement"<<endl;
    cout<<"The value of i1 is";
    i1.show_data();
    i2=i1++;
    cout<<"after postincrement"<<endl;
    cout<<"The value of i1 is";
    i1.show_data();
    cout<<"The value of i2 is";
    i2.show_data();

     // Reset i1
    i1.set_data(3);

    cout<<"before preincrement"<<endl;
    cout<<"The value of i1 is";
    i1.show_data();
    i2=++i1;
    cout<<"after postincrement"<<endl;
    cout<<"The value of i1 is";
    i1.show_data();
    cout<<"The value of i2 is";
    i2.show_data();
}