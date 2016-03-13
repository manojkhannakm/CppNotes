/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

class Class
{

public:

	mutable int i;          //Mutable vars can be modified by const objs and fns

	Class()
	{
		i = 10;
	}

	void set_i(int x) const
	{
		i = x;
	}

};

int main()
{
	Class obj;
	obj.i = 20;
	printf("%d\n", obj.i);

	obj.set_i(30);
	printf("%d\n", obj.i);

	return 0;
}
