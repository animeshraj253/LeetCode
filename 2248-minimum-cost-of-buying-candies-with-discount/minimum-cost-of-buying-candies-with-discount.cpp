class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort( cost.begin(), cost.end() , greater<int>() );

        int n = cost.size();
        if( n == 1) {
            return cost[0];
        }
        if( n == 2){
            return cost[0] + cost[1];
        }


        int buy = 0;
        
        int mini = 0;
        cout<<endl;
        while( buy < n ){
            mini+= cost[buy];
            buy++;

            if( buy < n){
                mini += cost[buy];
                buy++;
            }

            buy++;            
        }
        

        return mini;

    }
};