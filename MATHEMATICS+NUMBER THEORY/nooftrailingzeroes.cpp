#include<iostream>
using namespace std;
main()
{
    int result=0,n=625;
    for(int i=5;i<=n;i=i*5)
        result+=n/i;
    cout<<"No of trailing zeroes in factorial:"<<result;
}