// #include <iostream>
// #include <queue>

// using namespace std;

// class Node
// {
//     private:
//         int nodenumber;
//         Node *next;
//     public:
//         Node (int n )
//         {
//             nodenumber=n;
//             next=NULL;
//         }
//         friend class Graph;

// };

// class Graph
// {
//     private:
//         Node **adjlist;
//         bool *visited;
//         int totalV;
//         int totalE;

//         void addEdge(int source,int destination)
//         {
//             //Node* newnode = new Node(source);
//             Node* newnode = new Node(destination);
//             newnode->next = adjlist[source];
//             adjlist[source]=newnode;

//         }

//         void clear()
//         {
//             for (int i=0 ; i<totalV ; i++)
//             {
//                 visited[i]=false;
//             }
//         }
//     public:
//         Graph(int vertices , int edges)
//         {
//             totalE=edges;
//             totalV=vertices;
//             adjlist = new Node* [vertices]; //creating new array of size vertices of node pointers
//             visited = new bool[vertices];
//             for (int i=0 ; i<vertices ; i++)
//             {
//                 adjlist[i]=NULL;
//                 visited[i]=false;
//             }

//         }

//         void createGraph()
//         {
//             int source,destination;
//             for (int i=0;i<totalE;i++)
//             {
//                 cout<<"Enter Source and Destination \n";
//                 cout<<"Source: ";
//                 cin>>source;
//                 cout<<"Destination: ";
//                 cin>>destination;
//                 addEdge(source,destination);
//             }
//         }

//         void display()
//         {
//             cout<<"Graph is --> \n";
//             for (int i=0 ; i<totalV ; i++)
//             {
//                 if (adjlist[i]==NULL)
//                 {
//                     cout<<"No connections for node " << i <<" \n";
//                 }
//                 else{
//                     cout<<"Node connected to "<<i <<" --> ";
//                     Node *temp=adjlist[i];
//                     while (temp != NULL)
//                     {
//                         cout << temp->nodenumber << "  ";
//                         temp=temp->next;
//                     }
//                     cout<<"\n";
//                 }
//             }
//         }

// };

// int main()
// {
//     cout<<"Enter number of nodes: ";
//     int node=0,edges=0;
//     cin>>node;
//     cout<<"Enter number of edges: ";
//     cin>>edges;
//     Graph G(node,edges);
//     G.createGraph();

//     int choice=0 , choice2=0;
//     while (choice!=3)
//     {
//         cout<<"1.Display graph\n";
//         cout<<"2.Exit\n";
//         cout<<"Enter Choice: ";
//         cin>>choice;
//         switch (choice)
//         {
//         case 1:
//             G.display();
//             break;
//         default:
//             break;
//         }
//     }

//     return 0;
// }

// code 2

#include <iostream>
#include <queue>
#include <stack>
using namespace std;
#define MAXSIZE 20

class Node
{
    int data;
    Node *next;

public:
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int val)
    {
        data = val;
        next = NULL;
    }

    friend class Graph;
};

class Graph
{
    int max_size;
    Node *arr[MAXSIZE];

public:
    Graph()
    {
        max_size = 0;
    }
    Graph(int max)
    {
        max_size = max;
        for (int i = 0; i < max_size; i++)
        {
            arr[i] = NULL;
        }
    }
    void addEdge(int src_vertex, int dest_vertex)
    {
        Node *newn1 = new Node;
        newn1->data = src_vertex;
        Node *newn2 = new Node;
        newn2->data = dest_vertex;
        Node *temp;

        if (arr[src_vertex] == NULL)
        {
            arr[src_vertex] = newn2;
        }
        else
        {
            temp = arr[src_vertex];
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn2;
        }

        if (arr[dest_vertex] == NULL)
        {
            arr[dest_vertex] = newn1;
        }
        else
        {
            temp = arr[dest_vertex];
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn1;
        }
    }

    void display()
    {
        for (int i = 0; i < max_size; i++)
        {
            cout << "Vertex " << i << " -> ";
            Node *temp = arr[i];
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    void BFS(int src_vertex)
    {
        queue<int> q;
        bool visited[max_size] = {};
        q.push(src_vertex);
        visited[src_vertex] = 1;
        while (!q.empty())
        {
            src_vertex = q.front();
            q.pop();
            cout << src_vertex << ", ";

            Node *temp = arr[src_vertex];
            while (temp != NULL)
            {
                if (visited[temp->data] == 0)
                {
                    visited[temp->data] = 1;
                    q.push(temp->data);
                }
                temp = temp->next;
            }
        }
    }

    void DFS(int src_vertex)
    {
        stack<int> st;
        bool visited[max_size] = {};
        st.push(src_vertex);
        visited[src_vertex] = 1;
        while (!st.empty())
        {
            src_vertex = st.top();
            st.pop();
            cout << src_vertex << ", ";

            Node *temp = arr[src_vertex];
            while (temp != NULL)
            {
                if (visited[temp->data] == 0)
                {
                    visited[temp->data] = 1;
                    st.push(temp->data);
                }
                temp = temp->next;
            }
        }
    }
};

int main()
{
    int vertices, v1, v2;
    char choice;

    // Graph g(5);
    // g.addEdge(0,1);
    // g.addEdge(0,3);
    // g.addEdge(2,1);
    // g.addEdge(3,4);

    cout << "Enter number of vertices\n";
    cin >> vertices;
    Graph g(vertices);
    do
    {
        cout << "----MENU----\n";
        cout << "1) Add Edge\n";
        cout << "2) Display\n";
        cout << "3) BFS\n";
        cout << "4) DFS\n";
        cout << "5) Exit\n";
        cout << "Enter your choice\n";
        cin >> choice;

        switch (choice)
        {
        case '1':
            cout << "Enter vertice 1 : \n";
            cin >> v1;
            cout << "Enter vertice 2 : \n";
            cin >> v2;
            g.addEdge(v1, v2);
            break;
        case '2':
            g.display();
            break;
        case '3':
            g.BFS(0);
            break;
        case '4':
            g.DFS(0);
            break;
        case '5':
            cout << "Thank you\n";
            break;
        default:
            cout << "Choose between (0-5)\n";
        }
    } while (choice != '5');

    return 0;
}