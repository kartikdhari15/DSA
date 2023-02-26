#include<iostream>
using namespace std;
main()
{
    int arr[]={5,4,1,4,3,5,1,2},res=0,lsb=0,a=0,b=0;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        res^=arr[i];
    }
    while(lsb==1)
    {
        if((res>>lsb)&1)
            break;
        lsb+=1;
    }
    for(int j=0;j<n;j++)
    {
        if((arr[j]>>lsb)&1)
            a^=arr[j];
        else
            b^=arr[j];
    }
    cout<<"Two Non-Repeating Elements:"<<a<<" and "<<b;
    return 0;
}