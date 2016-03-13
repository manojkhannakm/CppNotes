/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

class Class
{

public:

	int i;

	Class()
	{
		printf("Default constructor\n");

		i = 10;
	}

	Class(const Class &obj)
	{
		printf("Copy constructor\n");

		i = obj.i;
	}

	Class &operator=(const Class &obj)
	{
		printf("Copy assignment operator\n");

		i = obj.i;
		return *this;
	}

	// Class(Class &&obj)                       //Invoked when rvalue is a temp obj
	// {
	//  printf("Move constructor\n");

	//  i = obj.i;
	//  obj.i = -1;
	// }

	// Class &operator=(Class && obj)
	// {
	//  printf("Move assignment operator\n");

	//  i = obj.i;
	//  obj.i = -1;
	//  return *this;
	// }

	~Class()
	{
		printf("Destructor\n");
	}

};

Class get(Class obj)                            //Calls copy constructor
{
	return obj;                                 //Calls copy constructor again or move constructor if C++11
}

int main()
{
	Class obj1;                                 //Calls default constructor

	Class obj2(obj1);                           //Calls copy constructor

	Class obj3 = obj1;                          //Calls copy constructor as it is considered a single arg init

	obj3 = obj1;                                //Calls copy assignment operator

	Class obj4 = get(obj1);

	obj4 = get(obj1);                           //Calls copy assignment operator or move assignment operator if C++11

	return 0;
}
