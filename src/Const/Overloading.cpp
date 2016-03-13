/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

class Class
{

public:

	void print()
	{
		printf("Non-const\n");
	}

	void print() const
	{
		printf("Const\n");
	}

};

int main()
{
	Class obj1;
	obj1.print();               //Calls non-const print

	const Class obj2;
	obj2.print();               //Calls const print

	return 0;
}
