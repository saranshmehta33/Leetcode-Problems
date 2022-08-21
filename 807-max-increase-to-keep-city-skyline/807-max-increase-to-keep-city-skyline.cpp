class Solution {
public:
    /*First calculate maximum value of each row and each column
      kisi bhi building ke liye hum minimum dekhenge uske rowmax aur colmax mei se 
      aur us building ki height hum minimum aur uski height ke difference jitni bada sakte           hai*/
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        int ans=0;
        vector<int> rowmax(n,0) , colmax(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                rowmax[i]=max(rowmax[i],grid[i][j]);
                colmax[i]=max(colmax[i],grid[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans+=(min(rowmax[i],colmax[j])-grid[i][j]);
            }
        }
        return ans;
    }
};