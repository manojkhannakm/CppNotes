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

};

class ChildA: virtual public Parent
{

public:

	ChildA()
	{
		i = 20;
	}

};

class ChildB: virtual public Parent
{

public:

	ChildB()
	{
		i = 30;
	}

};

class ChildC: public ChildA, public ChildB          //Multiple inheritance
{

public:

	void print_i()
	{
		// printf("%d\n", i);                       //Ambiguous if virtual not mentioned above
		// printf("%d %d\n", ChildA::i, ChildB::i); //Soln for ambiguity but two instances of i are there which is usually undesired

		printf("%d\n", i);
	}

};

int main()
{
	ChildC obj;                                     //Calls the constructors of Parent > ChildA > ChildB > ChildC
	obj.print_i();

	return 0;
}
