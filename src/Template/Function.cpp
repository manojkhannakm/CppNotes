/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

template <typename T> T add(T a, T b)
{
	return a + b;
}

template <typename T1, typename T2> bool equals(T1 a, T2 b)
{
	printf("Multiple types\n");

	return a == b;
}

template <typename T> bool equals(T a, T b)
{
	printf("Overloading\n");

	return a == b;
}

bool equals(int a, int b)
{
	printf("Explicit overloading for (int, int) type\n");

	return a == b;
}

int main()
{
	printf("%d\n", add(10, 20));
	printf("%f\n", add(0.1f, 0.2f));

	printf("%d\n", equals(10, 10.0f));
	printf("%d\n", equals(0.1f, 10.0f));
	printf("%d\n", equals(10, 10));

	return 0;
}
