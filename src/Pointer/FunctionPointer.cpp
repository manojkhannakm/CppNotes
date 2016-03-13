/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

void print(char *str)
{
	printf("%s\n", str);
}

int main()
{
	char str[] = "Hello world!";

	print(str);

	void (*printptr)(char *) = print;   //Creating fn ptr
	(*printptr)(str);                   //Invoking fn using ptr

	return 0;
}
