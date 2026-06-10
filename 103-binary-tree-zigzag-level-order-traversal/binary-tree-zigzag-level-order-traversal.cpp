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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> ans;
        if( root == NULL) return ans;
        
        queue < TreeNode * > q;

        q.push(root);
        bool check = true;
        while ( !q.empty() ){
            int s  = q.size();

            vector<int> data(s);

            for ( int i = 0; i<s; i++){
                TreeNode * temp = q.front();
                q.pop();

                int idx = check ? i : s-1-i;          
                data[idx] = temp->val;
                
                    if( temp->left){
                        q.push(temp->left);
                    }
                    if ( temp->right){
                        q.push(temp->right);
                    }
                
            }
            check = !check;
            ans.push_back(data);
        }
        
        return ans;
    }
};