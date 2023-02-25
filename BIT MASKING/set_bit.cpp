#include<iostream>
using namespace std;
main(){
    int a=25,i=2;
    int mask=1<<i;
    int result=a|mask;
    cout<<result;
    return 0;
}