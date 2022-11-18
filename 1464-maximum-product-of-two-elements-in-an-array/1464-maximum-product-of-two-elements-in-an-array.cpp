class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int max = 0;
        int val;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                val = (nums[i]-1)*(nums[j]-1);
               
                if(val>max)
                    max = val;
            }
        }
        return max;
    }
};