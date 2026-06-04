class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        
        vector<int> p(n);
        p[0] = 1;

        vector<int> s(n);
        s[n-1] = 1;

        for (int i = 1 ; i< n ; i++)
            p[i] = p[i-1] * arr[i-1];
            
        for( int i = n-2; i>-1; i--)
            s[i] = s[i+1] * arr[i+1];
        
        vector<int>ans(n);

        for( int i = 0; i<n ;i++)
            ans[i] = p[i] * s[i];

        return ans;
    }
};