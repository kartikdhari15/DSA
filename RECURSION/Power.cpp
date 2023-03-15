#include<bits/stdc++.h>
using namespace std;
int FindPower(int base,int power)
{
    if(power==0)
        return 1;
    else
        return base*FindPower(base,power-1);
}
main()
{
    int base=3,power=5;
    cout<<FindPower(base,power);
}