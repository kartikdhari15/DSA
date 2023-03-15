#include<bits/stdc++.h>
using namespace std;
void printHello(int n)
{
    if(n==0)
        return;
    else
    {
    cout<<"Hello"<<endl;
    printHello(n-1);
    }
}
main()
{
    printHello(5);
}