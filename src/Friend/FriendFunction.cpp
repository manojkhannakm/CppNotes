/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

class Class
{

	int i;

public:

	Class()
	{
		i = 10;
	}

	friend void print_i(Class);

};

void print_i(Class obj)           //Friend of class Class so all its fields and methods can be accessed here
{
	printf("%d\n", obj.i);
}

int main()
{
	Class obj;
	print_i(obj);
}
