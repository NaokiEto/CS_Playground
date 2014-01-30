#include <ccstlib>
#include <iostream>
#include "linkedlist.h"

using namespace std;

List::List()
{
    curr = NULL;
    temp = NULL;
    head = NULL;
}

void List::AddNode(int addval)
{
    nodePtr n = new node;
    n->next = NULL;
    n->val = addval;

    if (head != NULL)
    {
        curr = head;

        while (curr->next != NULL)
        {
            curr = curr->next
        }

        curr->next = n;
    }

    else
    {
        head = n;
    }
}


