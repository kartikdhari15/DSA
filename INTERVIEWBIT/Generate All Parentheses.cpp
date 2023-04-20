int Solution::isValid(string A) {
    stack<char>s;
    for(int i=0;i<A.size();i++)
    {
        if(s.empty())
            s.push(A[i]);
        else if((s.top()=='('&&A[i]==')')||
        (s.top()=='{'&&A[i]=='}')||(s.top()=='['&&A[i]==']'))
        {
            s.pop();
        }
        else    
            s.push(A[i]);
    }
    if(s.empty())
        return 1;
    else    
        return 0;
}
