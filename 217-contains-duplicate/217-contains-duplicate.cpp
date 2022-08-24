class Solution {
public:
    //we can use SET(cause it stores duplicate elements only once) and then compare the length of array and set and if length is not equal return true else return false
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int flag=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                 flag=1;
                break;
            }
        }
        if(flag)
            return true;
        else
            return false;
    }
};