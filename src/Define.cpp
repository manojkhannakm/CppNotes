/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

#define PI 3.14

int main()
{
	float pi;

#undef PI

#ifdef PI
	pi = PI;
#else
	pi = -1;
#endif

	printf("PI = %f\n", pi);

#ifndef PI
	printf("PI = %f\n", 3.14f);
#endif

	return 0;
}
