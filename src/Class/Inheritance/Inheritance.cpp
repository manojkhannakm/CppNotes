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
		j = 20;
		k = 30;
	}

protected:

	int j;

private:

	int k;

};

class ChildA: public Parent         //Public and protected members are inherited as it is
{

public:

	void print()
	{
		printf("%d %d\n", i, j);
	}

};

class ChildB: protected Parent      //Public and protected members are inherited as protected
{

public:

	void print()
	{
		printf("%d %d\n", i, j);
	}

};

class ChildC: private Parent        //Public and protected members are inherited as private
{

public:

	using Parent::i;                //Even after inheriting as private, the access can be changed using 'using' declaration

	void print()
	{
		printf("%d %d\n", i, j);
	}

};

int main()
{
	ChildA obja;
	obja.print();

	ChildB objb;
	objb.print();

	ChildC objc;
	objc.print();

	return 0;
}
