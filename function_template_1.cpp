//generic funtion


#include<iostream>
using namespace std;

template <class x>
x big(x a, x b)
{
    if (a>b)
        return a;
    else
        return b;
}

int main()
{
    cout<<big(4,5);
    cout<<endl;
    cout<<big(4.5,3.4);
    return 0;


}