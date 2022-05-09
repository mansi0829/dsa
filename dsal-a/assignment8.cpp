//============================================================================
// Name        : a8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Node{
public:
	char vertex;
	int weight;
	Node *next;

	Node(){
		vertex="*";
		weight=-1;
		next=NULL;
	}
	Node(char v,int w){
		vertex=v;
		weight=w;
		next=NULL;
	}

	friend class Graph;
};

class Graph{
	int vertexCount, edgeCount;
	Node **head;
public:
	Graph(){
		vertexCount=-1;
		edgeCount=-1;
		head=NULL;
	}
	Graph(int vC){
		vertexCount=vC;
		edgeCount=-1;
		head=NULL;
		for(int i=0; i<)
	}

	void createGraph();
	void displayGraph();
};

void Graph :: createGraph(){

}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
