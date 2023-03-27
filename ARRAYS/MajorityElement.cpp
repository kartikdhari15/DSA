#include<bits/stdc++.h>
using namespace std;
int majorityElement(int a[],int n)
{
    int m,count=0;
    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            m=a[i];
            count=1;
        }
        else if(m==a[i])
            count++;
        else
            count--;
    }
    count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)
            count++;
    }
    if(count>n/2)
        return m;
    else
        return -1;
}
main()
{
    int a[]={5,1,4,5,5,3,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Majority Element:"<<majorityElement(a,n);
}
