#include<iostream>
using namespace std;
main()
{
    int a,b,temp;
    cout<<"Enter a and b:";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"Now a and b:"<<a<<"\n"<<b;
}