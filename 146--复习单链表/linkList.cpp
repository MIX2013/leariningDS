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

//插入一个结点
void insertItem(linkList* plist,int i,Elemtype value)
{
	linkList list=*plist;
	if(i<1||i>length(list))
	{
		cout<<"对不起，你插入的位置不对"<<endl;
		exit(1);
	}

cout<<"你将在链表的第"<<i<<"个位置插入值为"<<value
	<<endl;
	int n=i-1;
	node* pre=list;
	while(n--)
		pre=pre->next;
	
	node* newnode=new node;
	newnode->data=value;
	newnode->next=pre->next;
	pre->next=newnode;
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
	cout<<"你将删除第"<<i<<"个位置的结点"<<endl;
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
	cout<<"第"<<i<<"个位置的值为"<<c->data<<endl;
	return c->data;
}
//清空一个链表

int locate(linkList list,Elemtype value)
{
	node* cur=list->next;
	int i=1;
	while(cur)
	{
		if(value==cur->data)	
		{
			cout<<"你查询的值"<<value<<"在链表的"
				<<i<<"位置"<<endl;
			return i;
		}
		cur=cur->next;
		i++;
	}
	cout<<"你要查询的值"<<value<<"不在链表中"<<endl;
	return 0;


}
Elemtype getpreviousvalue(linkList list,int i)
{
	if(i<2||i>length(list))
	{
		cout<<"你的输入有错"<<endl;
		exit(1);
	}

	int n=i-1; 
	node* cur=list;
	while(n--)
	{
		cur=cur->next;
	}
		return cur->data;	
}

void clear(linkList* plist)
{
	node* cur=(*plist)->next;	
	while(cur)
	{
		node* n=cur->next;	
		delete cur;
		cur=n;
	
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

}
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


void merge(linkList a,linkList b,linkList* sum)
{
	initLinkList(sum);
	node* psum=(*sum)->next;
	int n1=length(a);
	node* pa=a->next;
	int n2=length(b);
	node* pb=b->next;
	int count=n1+n2;
	wihle(cout--)
	{
			
	}


}

