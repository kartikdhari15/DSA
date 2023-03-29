#include<bits/stdc++.h>
using namespace std;
int result(int a[],int n)
{
    int maxProfit=0,minSoFar=a[0];
    for(int i=0;i<n;i++)
    {
        minSoFar=min(minSoFar,a[i]);
        int profit=a[i]-minSoFar;
        maxProfit=max(maxProfit,profit);
    }
    return maxProfit;
}
main()
{
    int a[]={1,2,3,4,55};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Max Profit:"<<result(a,n);
}