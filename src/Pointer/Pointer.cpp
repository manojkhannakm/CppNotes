/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

void print_next(int *aptr)
{
	printf("%d\n", *(aptr + 1));
}

int main()
{
	int a[] = {10, 20, 30};
	print_next(a);
	print_next(&a[0]);

	return 0;
}
