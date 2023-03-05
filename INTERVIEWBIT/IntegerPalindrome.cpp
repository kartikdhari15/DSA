int rev(int n){

    int ans=0;

    while(n!=0){

        ans=(ans*10)+n%10;

        n=n/10;

    }

    return ans;

}


int Solution::isPalindrome(int A) {

    if(A<0){

        return 0;

    }

    if(A==rev(A)){

        return 1;

    }

    return 0;

}