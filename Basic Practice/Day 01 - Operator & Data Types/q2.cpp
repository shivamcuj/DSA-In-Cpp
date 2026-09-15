#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter Cost of A Pencil: ";
    float pencil_price;
    cin>>pencil_price;
    cout<<"Enter Cost of A Pen: ";
    float pen_price;
    cin>>pen_price;
    cout<<"Enter Cost of A Eraser: ";
    float eraser_price;
    cin>>eraser_price;
    
    float total_price=pencil_price+pen_price+eraser_price;
    cout<<"The Total Bill Of User without GST is "<<total_price<<endl;;
    
    cout<<"After adding 18\% GST, the final bill is "<<total_price+(total_price*0.18)<<endl;
    return 0;
}