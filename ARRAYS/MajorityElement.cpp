#include<bits/stdc++.h>
using namespace std;
int majorityElement(int a[],int n)
{
    int ansIndex=0,count=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[ansIndex])
            count++;
        else
            count--;
        if(count==0)
        {
            ansIndex=i;
            count=1;
        }
        if(count>n/2)
        {
            return a[ansIndex];
        }
    }
}
main()
{
    int a[]={5,1,4,5,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Majority Element:"<<majorityElement(a,n);
}
