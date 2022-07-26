class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int max=INT_MIN;
        //Assume it is a 2D array
        for(int i=0;i<n;i++)
        {
            int count=0;
            int s=sentences[i].length();
            for(int j=0;j<s;j++)
            {
                if(sentences[i][j]==' ')//check for spaces 
                {
                    count++;
                }
            }
            if(count>max)
                max=count;
        }
        return max+1;//words=spaces+1
    }
};