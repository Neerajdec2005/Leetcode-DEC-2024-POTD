
class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int l=0;
        while(!q.empty()){
            int size=q.size();
            vector<TreeNode*> v;
            for(int i=0;i<size;i++){
                TreeNode* x=q.front();
                q.pop();
                v.push_back(x);
                if(x->left) q.push(x->left);
                if(x->right) q.push(x->right);
            }
            if(l&1){
                for(int i=0;i<v.size()/2;i++){
                    swap(v[i]->val,v[v.size()-i-1]->val);
                }
            }l++;

        }return root;
    }
};