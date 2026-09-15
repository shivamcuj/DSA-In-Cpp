#include <iostream>
#define PI 3.14
using namespace std;


int main()
{
    cout<<"Enter Radius of Circle: ";
    float r;
    cin>>r;
    float area = (PI*r)*r;
    cout<<"The Area of Circle is "<<area;
    return 0;
}