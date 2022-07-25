class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0 , e=nums.size()-1;
        int ans=-1;
        vector<int> result;
        //First Position
        while(s<=e)
        {
            
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                e=mid-1;
            }
            else if(target>nums[mid])
            {
                s=mid+1;
            }
            else if(target<nums[mid])
            {
                e=mid-1;
            }
        }
        result.push_back(ans);
          s=0 , e=nums.size()-1;
          ans=-1;
        
        //Last Position
         while(s<=e)
        {
            
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                s=mid+1;
            }
            else if(target>nums[mid])
            {
                s=mid+1;
            }
            else if(target<nums[mid])
            {
                e=mid-1;
            }
        }
        result.push_back(ans);
        return result;
    }
};