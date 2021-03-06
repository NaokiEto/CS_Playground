struct BinaryTreeNode
{
    int node_val;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
} node;

int TreeDepth(node* rootnode)
{
    // takes care of the base case, and we will call 
    if (rootnode == NULL)
    {
        return 0;
    }
    
    int numleft = TreeDepth(rootnode->left);
    int numright = TreeDepth(root->right);

    if (numleft > numright)
    {
        numleft += 1;
        return numleft;
    }
    else
    {
        numright += 1;
        return numright;
    }
}


