/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

class ClassA
{

	int i;

public:

	ClassA()
	{
		i = 10;
	}

private:

	void print_i()
	{
		printf("%d\n", i);
	}

	friend class ClassB;

};

class ClassB                //Friend of ClassA so all its fields and methods can be accessed through out this class
{

public:

	void print(ClassA obja)
	{
		obja.i = 20;
		obja.print_i();
	}

};

int main()
{
	ClassB objb;
	ClassA obja;
	objb.print(obja);
}
