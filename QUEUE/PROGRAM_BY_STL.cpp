#include<iostream>
#include<queue>
using namespace std;
main()
{
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.empty();
}