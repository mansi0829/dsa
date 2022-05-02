#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next = NULL;
    void createLL(int data)
    {
        node *head = NULL;
        node *second = NULL;
        head = new node();
        second = new node();
        head->data = data;
        head->next = second;
        cout << head->data << " -> ";
    }
    void push(int data)
    {
        node **headref;
        node *new_data = new node();
        new_data->data = data;
        new_data->next = *headref;
        *headref = new_data;
    }
};

int main()
{
    node ob;
    node *head = NULL;
    head->data = 1;
    ob.createLL(4);
    ob.createLL(5);
    ob.createLL(8);
    ob.push(9);
    return 0;
}