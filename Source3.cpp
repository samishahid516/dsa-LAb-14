#include <iostream>
#include <stack>
#include <list>
#include <conio.h>
using namespace std; int main()
{
	stack<int, list<int> > stk;

	for (int i = 1; i <= 10; i++) stk.push(i);

	while (!stk.empty()) {
		cout << stk.top() << endl; stk.pop();
	}
	return 0;
}
