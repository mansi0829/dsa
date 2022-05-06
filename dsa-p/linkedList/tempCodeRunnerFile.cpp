void push(int data)
    {
        node **headref;
        node *new_data = new node();
        new_data->data = data;
        new_data->next = *headref;
        *headref = new_data;
    }