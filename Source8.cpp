#include <iostream> 
#include <numeric> 
#include <conio.h> 
#include <time.h> // Retained for compatibility as you included it

using namespace std;

int vec[] = { 1, 2, 3, 4, 5 };

int main()
{
    int sum = accumulate(vec, vec + 5, 0);
    cout << sum << endl;

    int prod = accumulate(vec, vec + 5, 1, multiplies<int>()); // Fixed times<int>() to multiplies<int>()
    cout << prod << endl;

    return 0;
}
