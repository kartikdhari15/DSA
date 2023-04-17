#include<iostream>
using namespace std;
int stack[50],top=-1,n=50;
void push(int v)
{
    if(top>=n-1)
        cout<<"Stack Overflow"<<endl;
    else
    {
        top++;
        stack[top]=v;
    }
}
void pop()
{
    if(top<=-1)
        cout<<"Stack Underflow"<<endl;
    else
    {
        cout<<"Popped Element:"<<stack[top]<<endl;
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        cout<<"Elements are:";
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<" ";
        }
    }
    else    
        cout<<"Stack is empty";
}
main()
{
    int v;
    push(1);
    push(2);
    cout<<"Enter value to be pushed:";
    cin>>v;
    push(v);
    pop();
    display();
}