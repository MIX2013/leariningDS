#ifndef CURLINKLIST_H_
#define CURLINKLIST_H_
typedef int ElemType;
typedef struct node
{
	ElemType data;	
	struct node* next;
}node,*curLinkList;
void createListcurLink(curLinkList* plist);
int length(curLinkList list);
void printlink(curLinkList list);
#endif

