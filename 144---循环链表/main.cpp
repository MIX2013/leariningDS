#include"curLinkList.h"
#include<iostream>
using namespace std;
int main()
{
	curLinkList m_curLinkList;
	createListcurLink(&m_curLinkList);
	cout<<"���������ĳ�����"
		<<length(m_curLinkList)<<endl;
	printlink(m_curLinkList);



	return 0;
}
