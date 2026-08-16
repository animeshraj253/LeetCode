class Solution {
public:
    int characterReplacement(const string &s, int k) {
        vector<int> hsh(26,0);
        int n = s.size();

        int l = 0;
        int r = 0;
        int maxi = 0;
        int fre = 0;

        while (r < n){
            hsh[ s[r] - 'A'] ++;

            fre = max(fre , hsh[s[r] - 'A']);

            while ( r -l + 1 - fre > k){
                hsh[ s[l] -'A']--;
                l++;
            }

            maxi = max ( maxi , r-l+1);
            r++;
        }        

        return  maxi;
    }
};