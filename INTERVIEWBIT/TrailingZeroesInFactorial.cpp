int Solution::trailingZeroes(int A) {
    int result=0;
    for(int i=5;i<=A;i=i*5)
        result+=A/i;
    return result;
}
