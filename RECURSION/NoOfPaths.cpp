#include<bits/stdc++.h>
using namespace std;
int count(int n,int m)
{
    if(n==1||m==1)
        return 1;
    else
        return count(n-1,m)+count(n,m-1);
}
main()
{
    int n=3,m=3;
    cout<<count(n,m);
}