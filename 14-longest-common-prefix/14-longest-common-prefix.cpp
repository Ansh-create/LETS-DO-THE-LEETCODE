class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans= "";
        string min = *min_element(strs.begin(), strs.end());
        string max = *max_element(strs.begin(), strs.end());
        for(int i =0 ; i<min.size(); i++)
        {
            if(min[i]==max[i])
                ans = ans + min[i];
            else
                break;
        }
        return ans;
        
    }
};