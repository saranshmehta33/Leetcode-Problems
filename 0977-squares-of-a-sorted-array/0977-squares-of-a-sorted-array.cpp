class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int n = nums[i]*nums[i];
            ans.push_back(n);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};