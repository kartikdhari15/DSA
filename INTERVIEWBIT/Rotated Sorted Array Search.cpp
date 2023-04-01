int Solution::search(const vector<int> &A, int B) {
    int N=A.size();
    int low=0,high=N-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(A[mid]==B)
            return mid;
        if(A[low]<A[mid])
        {
            if(B>=A[low]&&B<A[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        else
        {
            if(B>A[mid]&&B<=A[high])
                low=mid+1;
            else
                high=mid-1;
        }
    }
    return -1;
}
