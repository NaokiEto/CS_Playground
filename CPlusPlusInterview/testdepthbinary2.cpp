struct binarynode
{
    int val;
    binarynode* leftnode;
    binarynode* rightnode;
};

int depth(binarynode* parentnode)
{
    if (parentnode == NULL)
    {
        return 0;
    }

    int leftcount = depth(parentnode->leftnode);
    int rightcount = depth(parentnode->rightnode);

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
