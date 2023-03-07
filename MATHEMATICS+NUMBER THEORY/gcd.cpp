#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
main()
{
    int a=60,b=24;
    cout<<"GCD:"<<gcd(a,b);
}