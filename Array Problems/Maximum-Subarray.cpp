/* By kadene's Algorithm */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=0;                
        int largest_sum=INT_MIN;   // sbse min value
        
        for(auto x : nums)
        {
            sum+=x;                               // consecutively sum krte gye jo maximum sum tha usko store kra diya
            largest_sum = max(sum,largest_sum);   // agr current sum maximum ho subarray ka toh usko largest_sum m daldiya
            
            if(sum<0)                 // agr sum -ve hoya tb usko contribution thodi hoga 
                sum=0;                // isliye tb sum ko zero krdiya
        }
        return largest_sum;
    }
};


/* Using Two For loops */
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                ans=max(sum,ans);
            }
        }
        return ans;
    }
};
