class Solution {
public:
    bool halvesAreAlike(string s) {
        int count = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(strchr("aeiouAEIOU", s[i]))
            {
                if(i<s.size()/2)
                    count++;
                else
                    count--;
            }
        }
        return count == 0;
        
    }
};
