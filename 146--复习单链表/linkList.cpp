#include"linkList.h"
#include<iostream>
using namespace std;
//��ʼ��
void initLinkList(linkList* plist)
{

	*plist=new node;
	(*plist)->next=0;
}
//ͷ�巨
//1.�½�һ�����
//2.�½���ͷ���ָ��ͬһ��λ�� (*plist)->next=newnode->next
//3.ͷ���ָ���²���Ľ��  newnode=(*plist)->next
void createLinkListHead(linkList* plist)
{
	int n;
	cout<<"��������Ҫ�����Ԫ�صĸ���"<<endl;
	cin>>n;
	if(n<0)
	{
		cout<<"������Ĳ����������"<<endl;
	}
	
	Elemtype value;
	while(n--)
	{
		node* p=new node;	
		p->next=(*plist)->next;
		cout<<"��������Ҫ�����ֵ"<<endl;
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

//����һ�����
void insertItem(linkList* plist,int i,Elemtype value)
{
	linkList list=*plist;
	if(i<1||i>length(list))
	{
		cout<<"�Բ���������λ�ò���"<<endl;
		exit(1);
	}

cout<<"�㽫������ĵ�"<<i<<"��λ�ò���ֵΪ"<<value
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


//ɾ��һ�����
void deleteItem(linkList* plist,int i)
{
	linkList list=*plist;
	if(i<1||i>length(list))
	{
		cout<<"�Բ���������λ�ò���"<<endl;
		exit(1);
	}
	cout<<"�㽫ɾ����"<<i<<"��λ�õĽ��"<<endl;
	node* p=list;
	int n=i-1;

	while(n--)
		p=p->next;
	node* c=p->next;	
	p->next=p->next->next;
	delete []c;
	


}

//�õ���i��λ�õ�ֵ
Elemtype getvalue(linkList list,int i)
{
	if(i<1||i>length(list))
	{
		cout<<"��Ѱ�ҵ�λ�ò��ڵ�����ĳ��ȷ�Χ֮��";
		exit(1);
	}
	int count=i;
	node* c=list;
	while(count--)
		c=c->next;
	cout<<"��"<<i<<"��λ�õ�ֵΪ"<<c->data<<endl;
	return c->data;
}
//���һ������

int locate(linkList list,Elemtype value)
{
	node* cur=list->next;
	int i=1;
	while(cur)
	{
		if(value==cur->data)	
		{
			cout<<"���ѯ��ֵ"<<value<<"�������"
				<<i<<"λ��"<<endl;
			return i;
		}
		cur=cur->next;
		i++;
	}
	cout<<"��Ҫ��ѯ��ֵ"<<value<<"����������"<<endl;
	return 0;


}
Elemtype getpreviousvalue(linkList list,int i)
{
	if(i<2||i>length(list))
	{
		cout<<"��������д�"<<endl;
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

//ɾ��һ������
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

//׷��һ�����
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
//����һ������
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

