class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int ans;
        int n = nums.size();
        map<int,int> mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        for(auto it:mp)
        {
            if(it.second > n/2)
            {
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};