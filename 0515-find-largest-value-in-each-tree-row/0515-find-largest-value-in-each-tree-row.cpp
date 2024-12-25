class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if (root == nullptr) {
            return vector<int>{};
        }
        
        queue<TreeNode*> q;
        q.push(root);
        vector<int> v;
        while(!q.empty()){
            int c=INT_MIN;
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* r=q.front();
                q.pop();
                c=max(c,r->val);
                if(r->left){
                    q.push(r->left);
                }
                if(r->right){
                    q.push(r->right);
                }
            }
            v.push_back(c);
        }return v;

    }
};