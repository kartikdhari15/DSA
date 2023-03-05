#include<iostream>
using namespace std;
main()
{
    int fact=1,no=5;
    for(int i=2;i<=no;i++)
        fact*=i;
    cout<<"Factorial:"<<fact;
}