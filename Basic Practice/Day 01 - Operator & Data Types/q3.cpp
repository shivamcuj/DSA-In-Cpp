#include <iostream>
using namespace std;

int main()
{
    //code to calculate simple interest for various inputs;
    int P,R,T;
    cout<<"Enter Principal, Rate and Time: "<<endl;
    cin>>P;
    cin>>R;
    cin>>T;
    cout<<"The Interest is "<<(P*R*T)/100<<endl;
    return 0;
}