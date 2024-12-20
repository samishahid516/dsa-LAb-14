#include <algorithm> 
#include <iostream>
#include <deque>
#include <conio.h>
using namespace std;
int main()
{
	deque<int> v;

	// The program creates a deque<int> called v.
	// It fills the deque with integers from 0 to 24 using a for loop.

	for (int i = 0; i < 25; i++) v.push_back(i);

	random_shuffle(v.begin(), v.end()); //The program shuffles the elements of the deque to randomize their order
	for (int j = 0; j < 25; j++) {
		cout << v.front() << " ";

		//v.front() accesses the first element, and v.pop_front() removes it from the deque
		v.pop_front();
	}

	cout << endl; 
	return 0;
}
