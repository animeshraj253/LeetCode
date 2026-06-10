/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if( root == NULL) return ans;

        queue<TreeNode * > q;

        q.push(root);

        while ( !q.empty()){
            int s = q.size();
            vector<int> data;

            for( int i = 0 ; i< s; i++){
                TreeNode * temp = q.front();

                q.pop();

                data.push_back(temp->val);

                if( temp->left){
                    q.push(temp->left);
                }
                if( temp->right){
                    q.push(temp->right);
                }
            }
            auto maxi = max_element(data.begin(), data.end());
            ans.push_back(*maxi);
        }
        return ans;
    }
};