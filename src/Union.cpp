/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

union Employee
{
	int i;                          //Both vars share the same memory location
	char c;
};

int main()
{
	Employee e = Employee();
	e.i = 1;
	e.c = 'a';
	printf("%d %c\n", e.i, e.c);

	return 0;
}
