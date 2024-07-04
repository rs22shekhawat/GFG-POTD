class Solution {
  public:
  unordered_map<string,int>mp;
  vector<Node*>ans;
  
  string solve(Node* root){
      if(!root)return "";
      
      string left=solve(root->left);
      string right=solve(root->right);
      
      string temp=to_string(root->data)+"#"+left+"#"+right;
      
      if(mp[temp]==1)ans.push_back(root);
      
      mp[temp]++;
      return temp;
      
  }
}


