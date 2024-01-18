#include <iostream>

void copy(int* f1, int* e1, int* f2)
{
	while (f1 != e1)
	{
		*f2++ = *f1++;
	}
}

int main()
{
	int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int array2[10] = {};

	copy(&array1[2], &array1[8], &array2[3]);

	return 0;
}