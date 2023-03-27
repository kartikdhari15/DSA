int Solution::majorityElement(const vector<int> &A) {
    int n=A.size();
    int m,count=0;
    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            m=A[i];
            count=1;
        }
        else if(m==A[i])
            count++;
        else
            count--;
    }
    count=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==m)
            count++;
    }
    if(count>n/2)
        return m;
    else
        return -1;
}
