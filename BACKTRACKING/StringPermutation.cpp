#include<bits/stdc++.h>
using namespace std;
void permute(string s,int l,int r)
{
    if(l==r)
    {
        cout<<s;
        return;
    }
for(int i=l;i<=r;i++)
{
    swap(s[l],s[i]);
    permute(s,l+1,r);
    swap(s[l],s[i]);
}
}
main()
{
    string s="abc";
    int l,r;
    permute(s,0,s.length()-1);
}