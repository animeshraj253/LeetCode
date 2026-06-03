class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int s = str.size();

        if( s == 0 ) return 0;
        if( s == 1 ) return 1;

        unordered_map <char,int> map;

        int l = 0 ; 
        int r = 0;
        int maxi = 0;

        while ( l < s && r < s ){
            map[str[r]]++;

            while(map[str[r]] > 1){
                map[str[l]]--;
                l++;
            }
            
            if(maxi < (r - l + 1))
                maxi  = (r - l + 1);
            r++;
        }
        return maxi ;
    }
};