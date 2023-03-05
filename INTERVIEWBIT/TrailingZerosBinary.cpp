int Solution::solve(int A) {
    int ctr=0;
    int size=sizeof(A)*8;
    for(int i=0;i<size;i++)
    {
        if((A>>i)&1)
            break;
        ctr++;
    }
return ctr;
}
