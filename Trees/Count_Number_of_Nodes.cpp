int NumNodes(TreeNode<int> * root){
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+=NumNodes(root->children[i]);
    }
    return ans;
}