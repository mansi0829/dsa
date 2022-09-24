#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
typedef long long int ll;
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        /* code */
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    return 0;
}