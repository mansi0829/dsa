//============================================================================
// Name        : 21231_A4.cpp
// Author      : mansi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#define size 10

class node
{
    string name;
    long int tel;

public:
    node()
    {
        tel = 0;
    }
    friend class hashing;
};

class hashing
{

    node data[size];
    string n;
    long int t;
    int  index;

public:
    hashing()
    {
    	index=0;
        t = 0;
    }

    int hashing_function(int unique_val)
    {
        return unique_val % size;
    }

    void create_record_without_replacement( string n,long t)
    {

    	cout << "\nEnter telephone number : ";
    	cin >> t;
      	cout << "\nEnter name : ";
       	cin >> n;

        int index = hashing_function(t);

        if(data[index].tel != t){
        	while(t!=size)
        	    {
        	        if (data[index].tel == 0)
        	        {
        	            data[index].name = n;
        	            data[index].tel=t;
        	            break;
        	         }
        	         else{
        	        	 index = (index + 1) % size;
        	         }

        	     }
        }
        else{
        	cout<<"RECORD IS ALREADY PRESENT";
        }
    }

    void create_record_with_replacement(string n, long t){
    	int index1;
    	int flag=0;
    	cout << "\nEnter telephone number :";
    	cin >> t;
        cout << "\nEnter name :";
    	cin >> n;

    	index1 = hashing_function(t);

    	if (data[index1].tel == t)
    	   {
    	       flag = 1;

    	   }
    	else
    		index1 = (index1 + 1) % size;

    	if(flag==1){
    		data[index1].name = n;
    	}
    }

    void search_record( string n, long t)
    {
        int index1, key, flag = 0;
        cout << "\nEnter record phone number to search : ";
        cin >> key;
        index1 = hashing_function(key);

        for (int a = 0; a < size; a++)
        {
            if (data[index1].tel == key)
            {
                flag = 1;
                cout << "\nRecord found:";
                cout << "\tNAME ";
                cout << "\t\tTELEPHONE ";
                cout << "\n\t"<< " \t"<< data[index1].name<< " \t"<< data[index1].tel;
                break;
            }
            else
                index1 = (index1 + 1) % size;
        }
        if (flag == 0)
            cout << "\nRecord  not found";
    }

    void delete_record( string n, long t)
    {
        int index1, key, flag = 0;
        cout << "\nEnter record id to delete : \n";
        cin >> key;
        index1 = hashing_function(key);

        for (int a = 0; a < size; a++)
        {
            if (data[index1].tel == key)
            {
                flag = 1;
                data[index1].name = " ";
                data[index1].tel = 0;
                cout << "\nRecord deleted successfully";
                break;
            }
            else
                index1 = (index1 + 1) % size;
        }
        if (flag == 0)
            cout << "\nRecord not found";
    }

    void update_record(string n, long t)
    {
        int index1, key, flag = 0;
        cout << "\nEnter record phone number to update : ";
        cin >> key;
        index1 = hashing_function(key);

        for (int a = 0; a < size; a++)
        {
            if (data[index1].tel == key)
            {
                flag = 1;
                break;
            }
            else
                index1 = (index1 + 1) % size;
        }

        if (flag == 1)
        {
            cout << "\nEnter name: \t\t\t";
            cin >> n;
            data[index1].name = n;
            cout << "\nDetails updated: ";
            cout << "\n\tNAME";
            cout << " \t\tTELEPHONE ";
            cout << "\n\t"<< data[index1].name<< " \t\t"<< data[index1].tel;
        }
    }

    void display_record()
    {
        cout << "\n\t \tNAME";
        cout << " \t\tTELEPHONE ";
        for (int a = 0; a < size; a++)
        {
            if (data[a].tel != 0)
            {
                cout << "\n\t" << " \t" << data[a].name << " \t\t" << data[a].tel;
            }
        }
    }
};

int main()
{
    int ch;
    long t;
    string n;
    hashing s;

    do
    {
        cout << "\n---------------LIST---------------\n";
        cout << "\n1.INSERT\n2.INSERT WITH REPLACEMENT\n3.DISPLAY\n4.SEARCH\n5.DELETE\n6.UPDATE\n7.EXIT\n\n";
        cout << "Enter your choice:";
        cin >> ch;
        cout << "\n";

        switch (ch)
        {
        case 1: // insert
            s.create_record_without_replacement(n, t);
            cout << "\n";
            break;

        case 2://insert with replacement
        	s.create_record_with_replacement(n, t);
        	cout<<"\n";
        	break;

        case 3: // display
            s.display_record();
            cout << "\n";
            break;

        case 4: // search
            s.search_record(n, t);
            cout << "\n";
            break;

        case 5: // delete
            s.delete_record(n, t);
            cout << "\n";
            break;

        case 6: // update
            s.update_record(n, t);
            cout << "\n";
            break;

        case 7: // exit
            break;
        } // end of switch
    } while (ch != 7);

    return 0;
}
