#include"curLinkList.h"
#include<iostream>
using namespace std;

void createListcurLink(curLinkList* plist)
{
	cout<<"������Ҫ����Ľ����Ŀ"<<endl;
	int n;
	cin>>n;
	if(n<1)
	{	
		cout<<"�Բ���������Ľ�����������Ҫ������˳�"<<endl;
		exit(1);
	}	
	 *plist=new node;	
	 (*plist)->next=*plist;

	int count=n;
	while(count--)
	{
		node* cur=new node;		
		cout<<"��������Ҫ����Ľ������ֵ"<<endl;
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
