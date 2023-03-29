int Solution::maxProfit(const vector<int> &A) {
    int profit=0;
    if(A.size()==0)
        return 0;
    for(int i=1;i<A.size();i++)
    {
        if(A[i]>A[i-1])
            profit+=(A[i]-A[i-1]);
    }
    return profit;
}

