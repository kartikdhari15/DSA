int Solution::maxSubArray(const vector<int> &A) {
    int maxsum=INT_MIN,sum=0;
    for(int i=0;i<A.size();i++)
    {
        sum+=A[i];
        maxsum=max(maxsum,sum);
        if(sum<0)
            sum=0;
    }
    return maxsum;
}
