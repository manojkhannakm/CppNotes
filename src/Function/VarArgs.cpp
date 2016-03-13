/*
 * @Author: Manoj Khanna
 */

#include <cstdarg>
#include <cstdio>

void print(int n, ...)
{
	va_list list;                           //Create a var arg list
	va_start(list, n);                      //Initialize the list with n
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n", va_arg(list, int));  //Retrieve the value
	}
	va_end(list);                           //Clear the list
}

int main()
{
	print(3, 10, 20, 30);

	return 0;
}
