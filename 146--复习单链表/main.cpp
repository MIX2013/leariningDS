#include"linkList.h"
#include<iostream>
using namespace std;


int main()
{
	linkList obj;
	initLinkList(&obj);
	createLinkListHead(&obj);
	traverse(obj);
    return 0;
}

