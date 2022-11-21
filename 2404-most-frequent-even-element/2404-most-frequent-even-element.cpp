class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
    
        map<int,int> mp;
        for(int i:nums)
        {
            if(i%2==0)
                mp[i]++;
        }
        
        int ans=-1 , freq=INT_MIN;
        for(auto it:mp)
        {
            if(it.second>freq)
            {
                ans = it.first;
                freq = it.second;
            }
        }
        return ans;
    }
};