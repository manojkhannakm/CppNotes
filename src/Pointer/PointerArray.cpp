/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

int print_next(int **aptrsptr)
{
	printf("%d\n", **(aptrsptr + 1));
}

int main()
{
	int n1 = 10, n2 = 20, n3 = 30;
	int *aptrs[] = {&n1, &n2, &n3};

	printf("%d\n", *aptrs[0]);

	print_next(aptrs);
	print_next(&aptrs[0]);

	return 0;
}
