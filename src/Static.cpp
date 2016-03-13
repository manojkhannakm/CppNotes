/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

class Class
{

	static int i;

public:

	static void print_i()
	{
		printf("%d\n", i);
	}

};

int Class::i = 10;          //Static vars can only be declared outside the class

int main()
{
	Class::print_i();       //Static members are called using the class name followed by the scope resolution operator
}
