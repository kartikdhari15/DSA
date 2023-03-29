int Solution::maxProfit(const vector<int> &A) {
    if(A.size()==0)
        return 0;
    int minSoFar=A[0],maxProfit=0;
    for(int i=0;i<A.size();i++)
    {
        minSoFar=min(minSoFar,A[i]);
        int profit=A[i]-minSoFar;
        maxProfit=max(maxProfit,profit);
    }
    return maxProfit;
}
