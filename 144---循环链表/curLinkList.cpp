#include"curLinkList.h"
#include<iostream>
using namespace std;

void createListcurLink(curLinkList* plist)
{
	cout<<"输入你要申请的结点数目"<<endl;
	int n;
	cin>>n;
	if(n<1)
	{	
		cout<<"对不起，你输入的结点个数不符合要求程序退出"<<endl;
		exit(1);
	}	
	 *plist=new node;	
	 (*plist)->next=*plist;

	int count=n;
	while(count--)
	{
		node* cur=new node;		
		cout<<"请输入你要输入的结点数据值"<<endl;
		cin>>cur->data;
		cur->next=(*plist)->next;
		(*plist)->next=cur;
	}
}

int length(curLinkList list)
{
	int n=0;
	node* cur=list->next;
	while(list!=cur)
	{
		n++;	
		cur=cur->next;
	}
	return n;
}

void printlink(curLinkList list)
{
	node* cur=list->next;
	while(list!=cur)
	{	
		cout<<cur->data<<' ';
		cur=cur->next;		
	}
	cout<<endl;
	
}
