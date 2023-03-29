#include<bits/stdc++.h>
using namespace std;
int maxprofit(int a[],int n)
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
            profit+=(a[i]-a[i-1]);
    }
    return profit;
}
main()
{
    int a[]={5,2,7,3,6,1,2,4};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Max Profit:"<<maxprofit(a,n);
}