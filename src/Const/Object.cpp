/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

class Class
{

public:

	int i;                              //Const objs expect class vars to be init
	static const int j = 20;

	Class()
	{
		i = 10;
	}

	void run()
	{
	}

};

int main()
{
	const Class obj1;                   //Const obj can access both const and non-const class vars
	// obj1.i = 20;                     //but their values cannot be modified
	printf("%d %d\n", obj1.i, obj1.j);

	// obj1.run();                      //Const obj can access only const methods

	// Class &obj2 = obj1;              //Const obj can only be assigned to const ref

	return 0;
}
