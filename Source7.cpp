#include <algorithm>
#include <iostream> 
#include <conio.h>
using namespace std;
int vec1[10];
int vec2[10];

int main()
{
	fill(vec1, vec1 + 10, -1); for (int i = 0; i < 10; i++)
		cout << vec1[i] << " "; cout << endl;

	fill_n(vec2, 5, -1);// Only the first 5 elements are set to -1. The rest retain uninitialized values.
	for (int j = 0; j < 10; j++) cout << vec2[j] << " ";
	cout << endl;

 return 0;
}
