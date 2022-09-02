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
    vector<double> averageOfLevels(TreeNode* root) {
         // apply bfs
        // declare a queue
        queue<TreeNode*> q;
        q.push(root);
        vector<double> res;
        
        while(!q.empty())
        {
            int size = q.size();    
            double sum = 0;
            for(int k = 0; k < size; k++)
            {
                // take out the front node 
                TreeNode* curr = q.front();
                q.pop();
                
                // update the sum
                sum += curr -> val;
                
                // push the left child into queue
                if(curr -> left)
                {
                    q.push(curr -> left);
                }
                
                // push the right child into queue
                if(curr -> right)
                {
                    q.push(curr -> right);
                }
            }
            
            // calculate avg. of a level
            double avg = sum / size;
            
            // push the avg into res
            res.push_back(avg);
        }
        
        return res;
    }
};