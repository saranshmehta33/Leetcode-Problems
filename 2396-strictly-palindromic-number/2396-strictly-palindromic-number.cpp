class Solution {
private:
  bool palindrome(string str)
  {
      int s=0;
      int e=str.size()-1;
      while(s<e)
      {
          if(str[s++] != str[e--])
          {
              return false;
          }
      }
      return true;
  }
public:
    bool isStrictlyPalindromic(int n) {
        
        int temp;
        string str="";
        for(int i=2;i<=n-2;i++)
        {
            temp=n;
            while(temp)
            {
                str = str + to_string(temp%i);
                temp = temp/i;
            }
            if(!palindrome(str))
            {
                return false;
            }
        }
        return true;
    }
};