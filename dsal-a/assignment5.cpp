//============================================================================
// Name        : assign5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
#define size 10

class node
{
    string name;
    string key;
    node *next;


public:
    node()
    {
    	name=" ";
        key = " ";
        next=NULL;
    }
    node(string k, string n){
    	key=k;
    	name=n;
    	next=NULL;
    }
    friend class hashing;
};

class dictionary
{
    node *data[size];


public:
    dictionary(){
    for(int i=0; i<size; i++){
    	data[i]=NULL;
    }
    }

    int hash_function(string word){
    	int convert=0;
    	for(int i=0; i<word.length(); i++){
    		convert+=int(word[i]);
    	}
    	return (convert % size);
    }
    void add (string k, string n){
    	cout<<"Enter the key : ";
    	cin>>k;
    	cout<<"Enter the name";
    	cin>>n;
    }
    void insert(string k, string n){
    	node *temp=new node(k, n);
    	int index = hash_function(k);
    	if(index!=NULL){
    		add(k, n);
    	}
    }

};

int main() {
	dictionary h;
	string key, name;
	h.insert(key, name);

	return 0;
}
