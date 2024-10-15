class Solution {
public:
    long long minimumSteps(string s) {
        int i=0;
        int j = s.length()-1;
        long long int ans = 0;
        while(i<j)
        {
            if(s[i]=='0' && s[j]=='1')
            {
                i++;
                j--;
            }
            else if(s[i]=='0' && s[j]=='0')
            {
              
                while(s[i]=='0' && i<j)
                {
                     
                     i++;
                }
                long long int count = j-i;
                 j--;
                 i++;
                 ans = ans+count;
            }
            else if(s[i]=='1' && s[j]=='1')
            {
                while(s[j]=='1' && i<j)
                {
                     
                     j--;
                }
               long long int count = j-i;
                 j--;
                 i++;
                 ans = ans+count;
            }
            else if(s[i]=='1' && s[j]=='0')
            {
               long long  int count = j-i;
                 j--;
                 i++;
                 ans = ans+count;
            }

        }

        return ans;
    }
};