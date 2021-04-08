class Solution {
public:
    
    vector<string> res;
    void bktr(string s, int pos, string cur)
    {
        vector<string> chars = { "0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
        if(cur.size() == s.size())
        {
            res.push_back(cur);
            return;
        }
        
        for(char c: chars[s[pos] - '0'])
        {
            bktr(s, pos+1, cur + c);
        }
        
    }
    vector<string> letterCombinations(string digits) {
        
        if(digits.size() == 0)
            return {};
        bktr(digits, 0, "");
        return res;
        
    }
};
