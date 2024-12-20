
#include <algorithm> 
#include <vector> 
#include <iostream>
#include <conio.h>

using namespace std;
const int N = 100; 
int main()
{
	vector<int> iv(N);
	iv[50] = 37;// The 51st element (index 50) of the vector is explicitly set to 37.
	vector<int>::iterator iter = find(iv.begin(), iv.end(), 37); if (iter == iv.end())
		cout << "not found\n";
	else
		cout << "found at " << iter - iv.begin() << "\n";


	return 0;
}
