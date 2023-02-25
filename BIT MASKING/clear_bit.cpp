#include<iostream>
using namespace std;
main(){
    int a=6,i=1;
    int mask=~(1<<i);
    int result=a&mask;
    cout<<result;
    return 0;
}