/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

int i = 10;

class Class
{

public:

	static const int i = 20;

};

int main()
{
	int i = 30;

	printf("%d %d %d\n", ::i, Class::i, i);
}
