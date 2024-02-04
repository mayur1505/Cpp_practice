//overloading of insertion and extraction operator
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
        friend ostream& operator<<(ostream&, complex);
        friend istream& operator>>(istream&, complex&);
};

ostream& operator<<(ostream &dout, complex c)
{
    cout<<"\n a= "<<c.a<<", b= "<<c.b;
    return(dout);
}

istream& operator>>(istream &din, complex &c)
{   
    cin>>c.a>>c.b;
    return(din);

}

int main()
{
    complex c1;
    cout<<"Enter a complex no \n";
    cin>>c1;
    cout<<"You entered";
    cout<<c1;
    
}