// new
#include <iostream>
using namespace std;
#define size 10

class Node
{
    string key;
    string value;
    Node *next;

public:
    Node()
    {
        key = "";
        value = "";
        next = NULL;
    }
    Node(string k, string v)
    {
        key = k;
        value = v;
        next = NULL;
    }
    friend class Dictionary;
};

class Dictionary
{
    Node *Bucket_of_Roots[size];

public:
    Dictionary();
    int Hash_Function(string key);
    void Insert_Entry(string key, string value);
    void Display_Entries();
    void Find_Entry(string key);
    void Delete_Entry(string key);
};

Dictionary::Dictionary()
{
    for (int i = 0; i < size; i++)
    {
        Bucket_of_Roots[i] = NULL;
    }
}

int Dictionary::Hash_Function(string key)
{
    char character;
    int sum = 0, length = key.length();
    for (int i = 0; i < length; i++)
    {
        character = key[i];
        sum += character;
    }
    return sum % size;
}

void Dictionary::Insert_Entry(string key, string value)
{
    int Hash_Index = Hash_Function(key);
    Node *Entry = new Node(key, value);
    Node *Current = Bucket_of_Roots[Hash_Index], *Previous = Current;

    if (Current == NULL)
    {
        Bucket_of_Roots[Hash_Index] = new Node(*Entry);
        cout << "Key Inserted Successfully." << endl;
        return;
    }

    while (Current != NULL)
    {
        if (key == Current->key)
        {
            cout << "This key is already present in Dictionary." << endl;
            return;
        }
        Previous = Current;
        Current = Current->next;
    }

    Previous->next = Entry;

    cout << "Key Inserted Successfully." << endl;
}

void Dictionary::Find_Entry(string key)
{
    int Hash_Index = Hash_Function(key);
    Node *Current = Bucket_of_Roots[Hash_Index];
    int comparisons = 0;
    while (Current)
    {
        comparisons++;
        // Key found
        if (key == Current->key)
        {
            cout << "Key Found" << endl;
            cout << "Key : " << Current->key << endl;
            cout << "Value : " << Current->value << endl;
            cout << "Comparisons : " << comparisons << endl;
            return;
        }
        Current = Current->next;
    }

    cout << "Key Not Found" << endl;
    cout << "Comparisons : " << comparisons + 1 << endl;
}

// Displaying Entries from Dictionary(or HashTable)
void Dictionary::Display_Entries()
{
    for (int i = 0; i < size; i++)
    {
        cout << "Bucket No. " << i << " -> ";
        Node *Current = Bucket_of_Roots[i];
        while (Current)
        {
            cout << "[ " << Current->key << " " << Current->value << " ] -> ";
            Current = Current->next;
        }
        cout << "[ -1 NULL ]" << endl;
    }
}

void Dictionary::Delete_Entry(string key)
{
    int Hash_Index = Hash_Function(key);
    Node *Current = Bucket_of_Roots[Hash_Index], *Previous = Current;
    while (Current)
    {
        if (key == Current->key)
        {
            cout << "Key " << Current->key << " is Deleted from Dictionary" << endl;
            if (Previous == Current)
                Bucket_of_Roots[Hash_Index] = Current->next;
            else
                Previous->next = Current->next;
            return;
        }
        Previous = Current;
        Current = Current->next;
    }

    cout << "Key Not Found" << endl;
}

int main()
{

    Dictionary D;

    string key;
    string value;

    while (1)
    {
        cout << "\n1. Insert Entry." << endl;
        cout << "2. Find Entry." << endl;
        cout << "3. Display Entries." << endl;
        cout << "4. Delete Entry." << endl;
        cout << "5. Exit." << endl;

        int choice;
        cout << "Enter your choice from Above Menu : ";
        cin >> choice;
        cout << endl;

        if (choice == 1)
        {
            cout << "Enter Key : ";
            cin >> key;
            cout << "Enter Value : ";
            cin >> value;
            D.Insert_Entry(key, value);
        }
        else if (choice == 2)
        {
            cout << "Enter Key to be Searched : ";
            cin >> key;
            D.Find_Entry(key);
        }
        else if (choice == 3)
        {
            cout << "**** Dictionary ****\n"
                 << endl;
            D.Display_Entries();
        }
        else if (choice == 4)
        {
            cout << "Enter Key to be Deleted : ";
            cin >> key;
            D.Delete_Entry(key);
        }
        else if (choice == 5)
        {
            cout << "Program Exit." << endl;
            break;
        }
        else
        {
            cout << "Enter a valid choice." << endl;
        }
    }

    return 0;
}