class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int c=nums.size();
        int high = c-1 ;
        
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return low;
    }
};