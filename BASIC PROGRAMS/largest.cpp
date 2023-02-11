#include<iostream>
using namespace std;
main()
{
    float a,b,c;
    cout<<"Enter different values of a,b and c:";
    cin>>a>>b>>c;
    if(a>=b&&a>=c)
        cout<<"Largest:"<<a;
    if(b>=a&&b>=c)
        cout<<"Largest:"<<b;
    if(c>=a&&c>=b)
        cout<<"Largest:"<<c;
}