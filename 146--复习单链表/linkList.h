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
int length(linkList list);

void insertItem(linkList* plist,int i,Elemtype value);

void deleteItem(linkList* plist,int i);
Elemtype getvalue(linkList list,int i);
int locate(linkList list,Elemtype value);
Elemtype getpreviousvalue(linkList list,int i);
//保留头节点，其他结点删除
void clear(linkList* plist);
//连头节点也不要，全部删除
void deletelist(linkList* plist); 
void traverse(linkList list);
void append(linkList* plist,Elemtype value);




//需要完善-----
void merge(linkList a,linkList b,linkList* sum);
void reversion(linkList*  plist);
void createLinkListTail(linkList* plist);




#endif 

