#include<bits/stdc++.h>
using namespace std;
void powerset(string s,int i,string cur)
{
    if(i==s.length())
    {
        cout<<cur;
        return;
    }
    powerset(s,i+1,cur+s[i]);
    powerset(s,i+1,cur);
}
main()
{
    int i=0;
    string cur="",s="ab";
    powerset(s,i,cur);
}