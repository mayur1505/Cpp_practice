
//write a code to use object pointer


#include<iostream>
using namespace std;
class box
{
    private:
        int l,b,h;        //instance member variable
    public:
        void set_dimension(int x, int y, int z)
        {
            l=x;
            b=y;
            h=z;
        }
        void show_dimension()
        {
            cout<<"\n l = "<<l<<" b = "<<b<<" h = "<<h;
        }
};

int main()
{
    box *p, small_box;
    p = & small_box; //p is object pointer
    p -> set_dimension(12,12,13);
    p -> show_dimension();


}