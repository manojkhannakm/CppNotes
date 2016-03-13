/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

int main()
{
	int i = 10;
	int *iptr = &i;
	int **iptrptr = &iptr;

	printf("%d\n", **iptrptr);

	return 0;
}
