#include<iostream>
#include<unordered_set>
using namespace std;
int count(int a[],int n)
{
    unordered_set <int> s;
    for(int i=0;i<n;i++)
        s.insert(a[i]);
    return s.size();
}
main()
{
    int a[]={5,10,5,4,5,10};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Number of distinct elements:"<<count(a,n);
}