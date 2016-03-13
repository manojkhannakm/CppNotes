/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

class Class
{

public:

	int i;

	Class(int x): i(x)
	{
	}

	Class operator+(const Class &obj)   //Class operator overloading
	{
		return Class(i + obj.i);
	}

};

// Class operator+(Class obj1, Class obj2) //Global operator overloading
// {
//  return Class(obj1.i + obj2.i);
// }

int main()
{
	Class obj1(10), obj2(20),
		  obj3 = obj1 + obj2;
	printf("%d\n", obj3.i);

	return 0;
}
