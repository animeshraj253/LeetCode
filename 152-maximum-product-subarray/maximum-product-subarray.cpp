class Solution {
public:
    int maxProduct(vector<int>& arr) {
        
        int n = arr.size();
        if (n == 1 ) return arr[0];

        int maxi = INT_MIN;

        for ( int i = 0; i < n ; i++){
            int prod = arr[i];
            maxi = max(maxi , prod);
            for(int j = i+1; j < n; j++){
                prod = arr[j] * prod;
                maxi = max(maxi , prod);
            }
        }

        return maxi;
    }
};