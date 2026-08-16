class Solution {
public:
    bool checkPali( const string &s, int l, int r){
        while( l < r){
            if ( s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n = s.size();

        if( n == 0 ) return s;
        if( n == 1 ) return s;

        int maxi = 0 ;
        int l = 0;
        int r = 0;
        
        for( int i= 0; i< n; i++){
            for( int j = i ; j < n; j++){
                if( checkPali(s,i,j) == true){
                    if( maxi < j - i + 1 ){
                        maxi = j - i + 1;
                        l = i;
                        r = j;
                    }
                }
            }
        }

        return s.substr(l, r - l + 1);
        
    }
};