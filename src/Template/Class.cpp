/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

template <typename T> class Class
{

public:

	T t;

	Class(T x): t(x)
	{
	}

};

template <> class Class<int>
{

public:

	int i;

	Class()
	{
		printf("Explicit overloading for <int> type\n");

		i = 10;
	}

};

int main()
{
	Class<float> obj1(1.5f);
	printf("%f\n", obj1.t);

	Class<int> obj2;
	printf("%d\n", obj2.i);

	return 0;
}
