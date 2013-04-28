#include"linkList.h"
#include<iostream>
using namespace std;
//初始化
void initLinkList(linkList* plist)
{

	*plist=new node;
	(*plist)->next=0;
}
//头插法
//1.新建一个结点
//2.新结点和头结点指向同一个位置 (*plist)->next=newnode->next
//3.头结点指向新插入的结点  newnode=(*plist)->next
void createLinkListHead(linkList* plist)
{
	int n;
	cout<<"请输入你要插入的元素的个数"<<endl;
	cin>>n;
	if(n<0)
	{
		cout<<"你输入的插入个数不对"<<endl;
	}
	
	Elemtype value;
	while(n--)
	{
		node* p=new node;	
		p->next=(*plist)->next;
		cout<<"请输入你要插入的值"<<endl;
		cin>>value;
		p->data=value;
		(*plist)->next=p;

	
	}
	
}


int length(linkList list)
{
	struct node* p=list->next;
	int n=0;
	while(p)
	{
		p=p->next;	
		n++;	
	}
	return n;

}
/*
//插入一个结点
void insertItem(linkList* plist,int i,Elemtype value)
{
	linkList list=*plist;
	if(i<1||i>length(list))
	{
		cout<<"对不起，你插入的位置不对"<<endl;
		exit(1);
	}

	int n=i-1;
	node* p=list;
	while(n--)
		p=p->next;
	
	node* newnode=new node;
	newnode->data=value;
	newnode->next=p->next;
	p->next=newnode;
}

//删除一个结点
void deleteItem(linkList* plist,int i)
{
	linkList list=*plist;
	if(i<1||i>length(list))
	{
		cout<<"对不起，你插入的位置不对"<<endl;
		exit(1);
	}
	node* p=list;
	int n=i-1;

	while(n--)
		p=p->next;
	node* c=p->next;	
	p->next=p->next->next;
	delete []c;
	


}

//得到第i个位置的值
Elemtype getvalue(linkList list,int i)
{
	if(i<1||i>length(list))
	{
		cout<<"你寻找的位置不在单链表的长度范围之内";
		exit(1);
	}
	int count=i;
	node* c=list;
	while(count--)
		c=c->next;
	return c->data;
}
//清空一个链表
void clear(linkList *plist)
{
	node* c=(*plist)->next;
	while(c)
	{
		node* n=c->next;	
		delete c;
		c=n;
	}
}

//删除一个链表
void deletelist(linkList* plist)
{
	node* p=*plist;
	node* n;
	while(p)
	{
		node* c=p->next;	
		delete c;
		n=c;
	}



}
//追加一个结点
void append(linkList* plist,Elemtype value)
{		
		
	node* p=*plist;
	while(p->next)
		p=p->next;
	node* c=new node;
	c=p->next;
	c->next=0;
	c->data=value;

}*/
//遍历一个链表
void traverse(linkList list)
{
	node* cur=list->next;
	for(int i=0;i<length(list);i++)
	{
		cout<<cur->data<<' ';
		cur=cur->next;
	}
	cout<<endl;


}

