class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       
        // Having a larger time complexity o(n2)
            int n= nums.size();
           // for (int i=0; i<n; i++)
            //{
              //  int e= nums[i];
                //for(int j=i+1; j<n; j++)
                //{
                  //  if(e==nums[j])
                    //    return 1;
                    
            //    }
            //}
            
        //return 0;
        
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-1; i++)
        {
            if(nums[i]==nums[i+1])
                return 1;
        } return 0;
    }
};