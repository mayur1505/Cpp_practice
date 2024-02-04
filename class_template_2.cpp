//make use of class template

#include<iostream>
using namespace std;

template <class x> class ArrayList
{
    private:
        struct control_block
            {
                int capacity;
                x *arr_ptr;
            };
        control_block *s;
    public:
        ArrayList(int capacity)
        {
            s=new control_block;
            s->capacity=capacity;
            s->arr_ptr=new x[capacity];
        }
        
        void addelement(int index, x data)
        {
            if (index >= 0 && index <= s-> capacity-1)
                s ->arr_ptr[index]=data;
            else   
                cout<<"\n Array index is not valid";
        }

        void viewelement(int index, x &data)
        {
            if (index >= 0 && index <= s-> capacity-1)
                data=s ->arr_ptr[index];
            else   
                cout<<"\n Array index is not valid";            
            
        }

        void viewlist()
        {
            int i;
            for (i=0;i<s->capacity;i++)
                cout<<" "<<s->arr_ptr[i];           
            
        }        
};

int main()
{
    ArrayList <float> list1(4);
    list1.addelement(0,3.2);
    list1.addelement(1,2.3);
    list1.addelement(2,4.5);
    list1.addelement(3,5.6);
    list1.viewlist();
}