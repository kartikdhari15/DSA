#include<iostream>
using namespace std;
main()
{
    int num,n,digit,rev=0;
    cout<<"Enter no:";
    cin>>num;
    n=num;
    while(num!=0)
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num/=10;
    }
    if(rev==n)
        cout<<"Palindrome";
    else
        cout<<"Not A Palindrome";
}