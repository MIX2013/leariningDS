#include"curLinkList.h"
#include<iostream>
using namespace std;
int main()
{
	curLinkList m_curLinkList;
	createListcurLink(&m_curLinkList);
	cout<<"这个单链表的长度是"
		<<length(m_curLinkList)<<endl;
	printlink(m_curLinkList);



	return 0;
}
