class Solution {
public:
    int minOperations(int n) {
        
        int count=0;
        
        vector<int> a;
        for(int i=0; i<n; i++)
            a.push_back((2*i)+1);
        
        for(int i=0; i<n/2; i++)
            count += n-a[i];
        
        return count;
    }
};
