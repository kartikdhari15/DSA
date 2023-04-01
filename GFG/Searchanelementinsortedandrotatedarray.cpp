//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}
// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> A, int B) {
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