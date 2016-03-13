/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

class Class
{

public:

	Class()
	{
		printf("Constructor\n");
	}

	Class(const Class &obj)             //Reason for passing a ref of obj is because of pt iii.
	{
		printf("Copy constructor\n");
	}

};

Class print(Class obj)                  //iii. Passing an obj to a fn creates a duplicate obj using the copy constructor
{
	return obj;                         //iv. Returning an obj from a fn also creates a duplicate obj using the copy constructor
}

int main()
{
	Class obj1;

	Class obj2(obj1);                   //i. Normal copy constructor

	Class obj3 = obj1;                  //ii. By default, assignment operator on an obj calls the copy constructor but it can be overloaded

	print(obj1);
}
