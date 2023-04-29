int Solution::evalRPN(vector<string> &A) {
    stack<int>s;
    int val,a,b,n=A.size();
    for(int i=0;i<n;i++)
    {
        if(A[i]=="+" or A[i]=="-" or A[i]=="*" or A[i]=="/") 
        {
        a=s.top();
        s.pop();
        b=s.top();
        s.pop();
       if(A[i] == "+") 
            val = (a + b);
       else if(A[i] == "-") 
            val = (b -a);
       else if(A[i] == "*") 
            val = (a * b);
       else  
            val = (b / a );
       s.push(val); 
       } 
       else s.push(stoi(A[i]));
    }
    return s.top();
}
