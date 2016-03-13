/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

class Parent
{

public:

	void print()
	{
		printf("Parent non-virtual\n");
	}

	virtual void print_virtual() = 0;   //Pure virtual fn, makes class abstract

};

class Child: public Parent
{

public:

	void print()
	{
		printf("Child non-virtual\n");
	}

	void print_virtual()                //Overrides Parent print_virtual
	{
		printf("Child virtual\n");
	}

};

int main()
{
	// Parent objp;                     //Obj cannot be created for an abstract class

	Child objc1;
	Parent &objc2 = objc1;
	objc2.print();                      //Calls Parent print
	objc2.print_virtual();              //Calls Child print_virtual

	return 0;
}
