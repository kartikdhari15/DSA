#include<bits/stdc++.h>
using namespace std;
int MaxSumSubArray(int a[],int n)
{
    int maxSum=0,sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum>maxSum)
            maxSum=sum;
        if(sum<0)
            sum=0;
    }
return maxSum;
}
main()
{
    int a[]={5,-4,-2,6,-1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Maximum Sum of Subarray:"<<MaxSumSubArray(a,n);
}