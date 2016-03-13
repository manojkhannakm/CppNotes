/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

template <typename T = int> class Class
{

public:

	T t;

};

int main()
{
	Class<float> obj1;
	obj1.t = 1.5f;
	printf("%f\n", obj1.t);

	Class<> obj2;                           //Creates obj with int as type
	obj2.t = 10;
	printf("%d\n", obj2.t);

	return 0;
}
