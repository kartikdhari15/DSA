#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==1)
        return 1;
    return n+sum(n-1);
}
main()
{
    int n=5;
    cout<<sum(n);
}