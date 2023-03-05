int Solution::reverse(int A) {
    int digit,rev=0;
    while(A!=0)
    {
        digit=A%10;
        A=A/10;
        if(rev > INT_MAX/10 || rev == INT_MAX/10 && digit> 7)
            return 0 ;
        if(rev < INT_MIN/10 || (rev == INT_MIN / 10 && digit < -8)) 
            return 0;
        rev=(rev*10)+digit;
    }
    return rev;
}
