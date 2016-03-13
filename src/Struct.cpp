/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

struct Employee
{
	int id;                             //Unlike class where default access is private, its public here
	char *name;
};

int main()
{
	Employee e = Employee();
	e.id = 10;
	e.name = "Aaa";
	printf("%d %s\n", e.id, e.name);

	return 0;
}
