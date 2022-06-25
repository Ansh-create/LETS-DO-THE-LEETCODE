class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN, sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(sum > maxSum)
                maxSum = sum;
            if(sum < 0)
                sum = 0;
        }
        return maxSum;
    }
    
};