#include<bits/stdc++.h>
using namespace std;
string isPalin(string s)
{
    string P=s;
    reverse(P.begin(),P.end());
    if(s==P)
        return "Yes";
    else    
        return "No";
}
main()
{
    string s="abac";
    cout<<"Result:"<<isPalin(s);
}