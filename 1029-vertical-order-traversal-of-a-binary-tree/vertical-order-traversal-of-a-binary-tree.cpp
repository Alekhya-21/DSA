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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;

        queue<pair<TreeNode*,pair<int,int>>> q; // node,col,row
        map<int,map<int,multiset<int>>> mp; //col,row,nodes

        q.push({root,{0,0}});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            TreeNode* node=it.first;
            int col=it.second.first;
            int row=it.second.second;
            mp[col][row].insert(node->val);
            if(node->left){
                q.push({node->left,{col-1,row+1}});
            }
            if(node->right){
                q.push({node->right,{col+1,row+1}});
            }
        }
        for(auto it:mp){
            vector<int> temp;
            for(auto itt:it.second){
                temp.insert(temp.end(),itt.second.begin(),itt.second.end());
            }
            result.push_back(temp);
        }
        return result;
    }
};