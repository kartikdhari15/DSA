#include<iostream>
#include<stack>
using namespace std;
main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    cout<<"INITIAL SIZE:"<<s.size()<<endl;
    while(!s.empty())
    {
        cout<<"PEEK RESULT:"<<s.top()<<endl;
        s.pop();
    }
    cout<<"FINAL SIZE:"<<s.size()<<endl;
    return 0;
}