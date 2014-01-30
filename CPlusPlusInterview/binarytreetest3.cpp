struct binarytreenode
{
    int val;
    binarytreenode* left;
    binarytreenode* right;
};

int depth(binarytreenode* parentnode)
{
    if (parentnode == NULL)
    {
        return 0;
    }

    int leftcount = depth(parentnode->left);
    int rightcount = depth(parentnode->right);

    if (leftcount > rightcount)
    {
        leftcount += 1;
        return leftcount;
    }

    else
    {
        rightcount += 1;
        return rightcount;
    }
}
