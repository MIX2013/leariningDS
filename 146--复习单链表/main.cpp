#include"linkList.h"
#include<iostream>
using namespace std;


int main()
{
	linkList obj;
	initLinkList(&obj);
	createLinkListHead(&obj);
	traverse(obj);
	insertItem(&obj,1,100);
	insertItem(&obj,2,30);
	deleteItem(&obj,3);
	deleteItem(&obj,4);

	traverse(obj);

	getvalue(obj,1);
	getvalue(obj,2);
	getvalue(obj,3);

	locate(obj,3);
	locate(obj,100);
	cout<<getpreviousvalue(obj,2)<<endl;
    return 0;
}

