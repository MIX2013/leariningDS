#ifndef LINKLIST_H_
#define LINKLIST_H_
typedef float Elemtype;
typedef struct node
{
	Elemtype data;
	 node* next;
}node,*linkList;
//15�ֲ���

void initLinkList(linkList* plist) ;
void createLinkListHead(linkList* plist);
int length(linkList list);

void insertItem(linkList* plist,int i,Elemtype value);

void deleteItem(linkList* plist,int i);
Elemtype getvalue(linkList list,int i);
int locate(linkList list,Elemtype value);
Elemtype getpreviousvalue(linkList list,int i);
//����ͷ�ڵ㣬�������ɾ��
void clear(linkList* plist);
//��ͷ�ڵ�Ҳ��Ҫ��ȫ��ɾ��
void deletelist(linkList* plist); 
void traverse(linkList list);
void append(linkList* plist,Elemtype value);




//��Ҫ����-----
void merge(linkList a,linkList b,linkList* sum);
void reversion(linkList*  plist);
void createLinkListTail(linkList* plist);




#endif 

