#include <iostream>

using namespace std;

int main() {
	int a = 10;
	int b = 8;

	cout << a << " " << b << endl;

	short *numa = (short *)&a;
	short *numb = (short *)&b;

	*++numa = *numb; 
	*numb = *--numa; 
	*++numb = *++numa;
	*--numa = *numb;
	*++numa = 0;
	*numb = 0;

	cout << a << " " << b << endl;

	return EXIT_SUCCESS;
}