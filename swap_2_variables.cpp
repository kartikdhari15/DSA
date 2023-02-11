#include<iostream>
using namespace std;
main()
{
    int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Now a and b:"<<a<<"\n"<<b;
}