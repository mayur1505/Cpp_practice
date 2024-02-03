//write a code to use static member variable and static member function


#include<iostream>
using namespace std;
class account
{
    private:
        int balance;        //instance member variable
        static float roi;  //static member variable
    public:
        void set_balance(int b)
        {balance=b;}
        static void set_roi(float r)  //static member function
        {roi=r;}
        void show_data()
        {
        cout<<"The value of roi is = "<<roi;
        }
};
float account:: roi=3.5f; //definition of static member vairable
int main()
{
account a1;
//a1.set_roi(4.5f); 
account :: set_roi(4.5f);
a1.show_data();


}