/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

class Class
{

	int i, j;

public:

	explicit Class(int x)
	{
		i = x;                          //Member init type 1
	}

	Class(int x, int y): i(x), j(y)     //Member init type 2
	{
	}

	int get_i()
	{
		return i;
	}

};

int main()
{
	Class obj1(10);                     //Implicit obj creation
	printf("%d\n", obj1.get_i());

	Class obj2 = Class(20);             //Explicit obj creation
	printf("%d\n", obj2.get_i());

	// Class obj3 = 30;                 //Single arg obj creation, applicable if constructor is not explicit
	// printf("%d\n", obj3.get_i());

	// Class obj4 {40};                 //Uniform init, applicable only from C++11
	// printf("%d\n", obj4.get_i());

	return 0;
}
