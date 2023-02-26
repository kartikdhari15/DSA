#include<iostream>
using namespace std;
main()
{
    int a=22,b=27,ctr=0;
    int exor=a^b;
    while(exor>0)
    {
        ctr++;
        exor&=(exor-1);
    }
    cout<<"No of bits required to change from "<<a<<" to "<<b<<":"<<ctr;
    return 0;
}