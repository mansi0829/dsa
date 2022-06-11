#include <bits/stdc++.h>
using namespace std;

class Node
{
    int data;
    Node *next;

public:
    Node()
    {
        next = NULL;
    }
    Node(int x)
    {
        data = x;
        next = NULL;
    }
    friend class simpleInsert;
};

class simpleInsert
{
    void insertLinkedList(int x)
    {
        // allocate and assign data to node
        Node entry = new Node(x);
        head->next = entry;
    }
}

int main()
{

    return 0;
}