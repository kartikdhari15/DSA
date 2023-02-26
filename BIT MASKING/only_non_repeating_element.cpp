#include<iostream>
using namespace std;
main()
{
    int arr[]={1,4,5,5,1};
    int n=sizeof(arr)/sizeof(int),res=0;
    for(int i=0;i<n;i++)
    {
        res^=arr[i];
    }
    cout<<"Only Non-Repeating Element:"<<res;
}