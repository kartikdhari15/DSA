int Solution::largestRectangleArea(vector<int> &nums) {
    int n=nums.size();
    vector<int> left_smaller(n , 0);
    vector<int> right_smaller(n , n-1);
    stack<int> stk;
    stk.push(0);
    for(int i=1;i<n;i++)
    {
        while(!stk.empty() && nums[i] <= nums[stk.top()])
        {
            stk.pop();
        }
       
        if(stk.empty())
        {
            left_smaller[i]=0;
        }
        else
        {
            left_smaller[i]=stk.top()+1;
        }
       
        stk.push(i);
    }
   
    while(!stk.empty())
    {
        stk.pop();
    }
   
    stk.push(n-1);
     
     for(int i=n-2;i>=0;i--)
     {
         while( !stk.empty() && nums[i] <= nums[stk.top()])
         {
             stk.pop();
         }
         
         if(stk.empty())
         {
             right_smaller[i]=n-1;
         }
         else{
             right_smaller[i]=stk.top()-1;
         }
         
         stk.push(i);
     }
     int max_area=0;
     for(int i=0;i<n;i++)
     {
         int h=(right_smaller[i]-left_smaller[i] + 1)*nums[i];
         max_area=max(max_area , h);
     }
     
    return max_area;
}