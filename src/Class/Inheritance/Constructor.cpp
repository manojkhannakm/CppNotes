/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

class Parent
{

public:

	int i;

	Parent()
	{
		i = 10;
	}

	Parent(int x): i(x)
	{
	}

};

class Child: public Parent
{

public:

	Child()                         //Calls Parent default constructor
	{
		i += 10;
	}

	Child(int x)                    //Calls Parent default constructor
	{
		i += x;
	}

	Child(int x, int y): Parent(x)  //Calls Parent(int) constructor
	{
		i += y;
	}

};

int main()
{
	Child obj1;
	printf("%d\n", obj1.i);

	Child obj2(20);
	printf("%d\n", obj2.i);

	Child obj3(20, 20);
	printf("%d\n", obj3.i);

	return 0;
}
