class List
{
    private:
    struct node
    {
        int val;
        node* next;
    } * nodePtr;

    nodePtr temp;
    nodePtr curr;
    nodePtr head;

    public:
    //Constructor
    List();
    // functions
    void AddNode(int addval);
    void DeleteNode(int delval);
};
