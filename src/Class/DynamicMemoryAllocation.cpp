/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

class Class
{

public:

	int i;

	~Class()
	{
		printf("Destructor: %d\n", i);
	}

};

Class get_obj()
{
	Class obj;                              //Obj is stored in the stack
	obj.i = 10;
	return obj;                             //Lifetime of this obj is extended till the end of the scope where this fn is called
}

Class *get_obj_ptr()                        //Not recommended
{
	Class obj;
	obj.i = 20;
	return &obj;                            //Lifetime of this obj ends within this scope
}

Class *get_dynamic_obj_ptr()
{
	Class *obj = new Class();               //Obj is stored in the heap as it is created dynamically
	obj->i = 30;
	return obj;                             //Lifetime of this obj won't expire until delete is called on it
}

int main()
{
	Class obj1 = get_obj();
	printf("%d\t", obj1.i);
	printf("%d\n", obj1.i);

	Class *obj2 = get_obj_ptr();
	printf("%d\t", obj2->i);
	printf("%d\n", obj2->i);

	Class *obj3 = get_dynamic_obj_ptr();
	printf("%d\t", obj3->i);
	printf("%d\n", obj3->i);
	delete obj3;

	Class *objs = new Class[3];             //Creating array of dynamic objs
	(*objs).i = 40;
	(*(objs + 1)).i = 50;
	(*(objs + 2)).i = 60;
	delete [] objs;                         //Deleting array of dynamic objs

	return 0;
}
