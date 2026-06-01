class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int size = nums.size();
        vector<pair<int,int>> result;
        vector<int> ans = {};
        for( int i = 0; i<size; i++){
            result.push_back({nums[i],i});
        }

        sort(result.begin(),result.end());

        int l = size - 1;
        int s = 0;

        while(s<l){
            int sum = result[s].first + result[l].first;
            if(sum == target){
                ans.push_back(result[s].second);
                ans.push_back(result[l].second);
                break;
            }
            else if( sum > target)
                l--;
            else if ( sum < target)
                s++;
        }
        return ans;
    }
};