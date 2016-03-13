/*
 * @Author: Manoj Khanna
 */

#include <cstdio>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	for (int i = 1; i <= 5; ++i)
	{
		v.push_back(i * 10);
	}

	for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)                        //Iterator
	{
		printf("%d ", *i);
	}
	printf("\n");

	for (vector<int>::reverse_iterator i = v.rbegin(); i != v.rend(); ++i)              //Reverse iterator
	{
		printf("%d ", *i);
	}
	printf("\n");

	// for (vector<int>::const_iterator i = v.cbegin(); i != v.cend(); ++i)             //Const iterator, applicable only from C++11
	// {
	//  // *i *= 10;
	// }
	// printf("\n");

	// for (vector<int>::const_reverse_iterator i = v.crbegin(); i != v.crend(); ++i)   //Const reverse iterator, applicable only from C++11
	// {
	//  // *i *= 10;
	// }
	// printf("\n");

	return 0;
}
