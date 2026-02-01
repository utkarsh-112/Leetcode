// Last updated: 01/02/2026, 21:16:34
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
    void solve(TreeNode *root, map<int, map<int, vector<int>>> &mp){
        if(root == nullptr){
            return;
        }
        
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 0}});
        
        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size; ++i){
                pair<TreeNode*, pair<int, int>> p = q.front();
                pair<int, int> rc = p.second;
                q.pop();
                
                if(p.first->left){
                    q.push({p.first->left, {rc.first-1, rc.second + 1}});
                }    
                if(p.first->right){
                    q.push({p.first->right, {rc.first+1, rc.second + 1}});
                }    
                
                if(mp.find(rc.first) == mp.end()){
                    mp[rc.first] = map<int, vector<int>>();
                }
                mp[rc.first][rc.second].push_back(p.first->val);
               // cout << p.first->val << " " << rc.first << " " << rc.second << endl;
            }
        }
        
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, vector<int>>> mp;
        
        solve(root, mp);
        
        vector<vector<int>> v;
        for(auto x: mp){
            vector<int> t;
            for(auto &y: x.second){
                sort(begin(y.second), end(y.second));
                t.insert(t.end(), begin(y.second), end(y.second));
            }
            v.push_back(t);
        }
        
        return v;
    }
};