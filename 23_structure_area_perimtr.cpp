#include <iostream>

using namespace std;
class rectanagle
{
    public:
    float length,breadth;
    rectanagle(float l,float b)
    {
        length=l;
        breadth=b;
    }
    
    float area()
    {
        return length*breadth;
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
   
};

int main()
{
    float length,breadth;
    cout<<"enter the lenght of the rectangle"<<endl;
    cin>>length;
    
    
    cout<<"enter the breadth of the rectangle"<<endl;
    cin>>breadth;
    rectanagle r(length,breadth);

    cout<<"area ="<<r.area()<<endl;
    cout<<"perimeter"<<r.perimeter()<<endl;

    return 0;
}