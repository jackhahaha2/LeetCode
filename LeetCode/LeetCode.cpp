﻿#include <iostream>
//#include "Btree.h"
//#include "ThreadBTree.h"
//#include "T731.h"
//#include "MyList.h"
//#include "smartptr.h"
#include "smartList.h"

using namespace std;

int main()
{
	/*Btree* btree = new Btree;
	btree->test();*/

	/*ThreadBTree* tbtree = new ThreadBTree;
	tbtree->test();*/

	/*T731* time = new T731;
	time->test();*/

	/*string input;
	getline(cin, input);

	vector<string> ans = Split::Split(input, ' ');
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}*/

	/*MyList* listA = new MyList;
	listA->BackCreate();
	listA->deleteDuplicates();
	listA->Output();*/

	/*smartptr::smartptrtest();*/

	shared_ptr<smartList<int>> sl(new smartList<int>);
	sl->backcreate();
	sl->show();
}
