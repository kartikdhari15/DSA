#include<bits/stdc++.h>
using namespace std;
int jos(int n,int k)
{
    if(n==1)
        return 0;
    return(jos(n-1,k)+k)%n;
}
main()
{
    int n=5,k=3;
    cout<<jos(n,k);
}