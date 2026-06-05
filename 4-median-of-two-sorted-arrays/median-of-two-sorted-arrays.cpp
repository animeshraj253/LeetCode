class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();

        vector<int> arr3;
        int l = 0 ;
        int r = 0;

        while( l < n && r < m){
            if(  arr1[l] <= arr2[r] ){
                arr3.push_back(arr1[l]);
                l++;
            }   
            else if( arr2[r] <= arr1[l]){
                arr3.push_back(arr2[r]);
                r++;
            }
        }

        while( l < n){
            arr3.push_back(arr1[l]);
            l++;
        }

        while( r< m ){
            arr3.push_back(arr2[r]);
            r++;
        }

        double median;
        int size = arr3.size();
        if( size % 2 != 0){
            median = (double) arr3[size/2] ;
        }
        else if( size % 2 == 0 ){
            median = (double ) ( arr3[size/2] + arr3[(size/2) - 1] ) / 2;
        }
        return median;
    }
};