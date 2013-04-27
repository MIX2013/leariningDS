#ifndef LINKLIST_H_
#define LINKLIST_H_
typedef float Elemtype;
typedef struct node
{
	Elemtype data;
	 node* next;
}node,*linkList;
//15种操作

void initLinkList(linkList* plist) ;
void createLinkListHead(linkList* plist);
/*void createLinkListTail(linkList* plist);
int length(linkList list);
void insertItem(linkList* plist,int i,Elemtype value);
void deleteItem(linkList* plist,int i);
//比较难，需要学习
void reversion(linkList*  plist);
Elemtype getvalue(linkList list,int i);
int locate(linkList list,Elemtype value);
Elemtype getpreviousvalue(linkList list,int i);
Elemtype getnextvalue(linkList list,int i);
void clear(linkList* plist);
void deletelist(linkList* plist);
void append(linkList* plist,Elemtype value);
void merge(linkList a,linkList b,linkList* sum);
void traverse(linkList list);*/

void traverse(linkList list);



#endif 

