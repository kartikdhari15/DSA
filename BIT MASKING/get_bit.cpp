#include<iostream>
using namespace std;
main()
{
    int a=15,i=6;
    int mask=1<<i;
    int result=a&mask;
    if(result==0)    
        cout<<"Bit was 0";
    else
        cout<<"Bit was 1";
    return 0;
}