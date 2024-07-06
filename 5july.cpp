class Solution {
  public:
    // Function to find the vertical width of a Binary Tree.
    void h(Node* root,unordered_set<int>&s,int curr){
        if(root==NULL)return;
        
       
        s.insert(curr);
        h(root->left,s,curr-1);
        h(root->right,s,curr+1);
    }
    
    
    public: int verticalWidth(Node* root) {
        // code here.
        unordered_set<int>s;
        h(root,s,0);
        return s.size();
    }
};