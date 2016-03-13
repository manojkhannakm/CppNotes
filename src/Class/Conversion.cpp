/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

class ClassA
{

public:

	int i;

	ClassA()
	{
		i = 10;
	}

	operator int()          //This allows ClassA obj to be stored on a int
	{
		return i;
	}

};

class ClassB
{

public:

	operator ClassA()
	{
		return ClassA();    //This allows ClassB obj to be stored on a ClassA obj
	}

};


int main()
{
	int i = ClassA();
	printf("%d\n", i);

	ClassA obj = ClassB();
	int j = obj;
	printf("%d\n", j);

	return 0;
}
