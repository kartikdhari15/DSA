#include<iostream>
#include<unordered_set>
using namespace std;
main()
{
    unordered_set <int> s;
    s.insert(5);
    s.insert(10);
    s.insert(15);
    if(s.find(5)==s.end())
        cout<<"Not Found"<<endl;
    else    
        cout<<"Found"<<endl;
    for(auto it=s.begin();it!=s.end();it++)
        cout<<(*it)<<" ";
    cout<<"\n";
    cout<<s.size()<<endl;
    cout<<s.count(20)<<endl;
    s.erase(10);
    cout<<s.size()<<endl;
    s.clear();
    cout<<s.size()<<endl;
}