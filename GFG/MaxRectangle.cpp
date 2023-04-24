//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
 vector<int> nextSmaller(vector<int> &arr){
    stack<int> s;
    s.push(-1);
    int n = arr.size();
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        int item  = arr[i];
        while(s.top()!=-1 && arr[s.top()]>=item){
            s.pop();
        }
        if(s.top()==-1){
            ans[i] = n;
        }
        else{
            ans[i] = s.top();
        }
        s.push(i);
    }
    return ans;
}
vector<int> prevSmaller(vector<int> &arr){
    stack<int> s;
    s.push(-1);
    int n = arr.size();
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int item  = arr[i];
        while(s.top()!=-1 && arr[s.top()]>=item){
            s.pop();
        }
        
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
int largestArea(vector<int> arr){
    vector<int> prev = prevSmaller(arr);
    vector<int> next = nextSmaller(arr);
    int maxArea = INT_MIN;
    for(int i=0;i<arr.size();i++){
        int length = arr[i];
        int breadth = next[i] - prev[i] - 1;
        int newArea = length*breadth;
        maxArea = max(maxArea,newArea);
    }
    return maxArea;
}
int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        int maxi = INT_MIN;
        vector<int> histogram(m,0);
        for(int i= 0; i<n ;i++){
            for(int j=0;j<m;j++){
                if(M[i][j] == 1){
                    histogram[j]++;
                }
                else{
                    histogram[j] = 0;
                }
            }
            maxi = max(maxi,largestArea(histogram));
        }
      return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends