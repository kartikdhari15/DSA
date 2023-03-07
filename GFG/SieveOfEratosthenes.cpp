//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        vector<int>v;
        vector<bool>prime(N+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i*i<=N;i++)
        {
            if(prime[i]==true)
            {
                for(int j=i*i;j<=N;j+=i)
                    prime[j]=false;
            }
        }
        for(int j=2;j<=N;j++)
        {
        if(prime[j])
            v.push_back(j);
        }    
         return v;    
    }
   
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends