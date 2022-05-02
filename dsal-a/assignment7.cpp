#include <bits/stdc++.h>
using namespace std;
#define ROW 10
#define COL 10
#define infi 10

class prims
{
    int graph[ROW][COL], nodes;
public:
    void createGraph();
    void primsAlgo();
};

void prims::createGraph()
{
    int i, j;
    cout << "Enter Total Offices: ";
    cin >> nodes;
    cout << "\nEnter Adjacency Matrix: \n";
    for (i = 0; i < nodes; i++)
    {
        for (j = i; j < nodes; j++)
        {
            cout << "Enter distance between " << i << " and " << j << endl;
            cin >> graph[i][j];
            graph[j][i] = graph[i][j];
        }
    }

    for (i = 0; i < nodes; i++)
    {
        for (j = 0; j < nodes; j++)
        {
            if (graph[i][j] == 0)
                graph[i][j] = infi; // fill infinity where path is not present
        }
    }
}

int main()
{
    prims obj;
    cout << "\Prism Algorithm\n";
    obj.createGraph();
}