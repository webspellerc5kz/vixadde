#include <iostream>
using namespace std;

void swap (int* a, int* b);

int main() {
	int x = 3;
	int y = 2;

	cout << "x = " << x << " y = " << y << endl;
	swap(&x, &y);                                               // Give me the address of the parameters (&a, &b)
	cout << "Now x = " << x << " y = " << y << endl;
}

void swap(int* a, int* b) {
	int temp = *b;                                              // Points to Address, and swaps the address itself to swap nums.
	*b = *a;
	*a = temp;
}
