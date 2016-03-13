/*
 * @Author: Manoj Khanna
 */

#include <cstdio>
#include <vector>

using namespace std;

void print(vector<int> v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		printf("%d ", v[i]);
	}
	printf("\n");
}

int main()
{
	vector<int> v;
	for (int i = 1; i <= 5; ++i)
	{
		v.push_back(i * 10);
	}
	print(v);

	printf("%d\n", v[2]);               //Returns element at specified position

	printf("%d\n", v.at(2));            //Returns element at specified position

	printf("%d\n", v.front());          //Returns the first element

	printf("%d\n", v.back());           //Returns the last element

	return 0;
}
