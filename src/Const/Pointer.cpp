/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

int main()
{
	int i = 10;

	const int *i_ptr = &i;          //Prevents its value from being modified
	i_ptr = 0;
	// *i_ptr = 20;

	int *const i_const_ptr = &i;    //Prevents its address from being modified
	// i_const_ptr = 0;
	(*i_const_ptr) = 20;

	return 0;
}
