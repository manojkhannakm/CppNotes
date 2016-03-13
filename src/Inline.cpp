/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

inline void print()                 //For an inline fn the entire body is copied to wherever it is called, this prevents fn calling overhead
{
	for (int i = 1; i <= 10; ++i)
	{
		printf("%d\n", i);
	}
}

int main()
{
	print();
}
