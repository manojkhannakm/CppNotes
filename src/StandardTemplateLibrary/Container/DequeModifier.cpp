/*
 * @Author: Manoj Khanna
 */

#include <cstdio>
#include <deque>

using namespace std;

void print(deque<int> d)
{
	for (int i = 0; i < d.size(); ++i)
	{
		printf("%d ", d[i]);
	}
	printf("\n");
}

int main()
{
	deque<int> d;
	for (int i = 1; i <= 3; ++i)
	{
		d.push_front(i * 10);           //Adds the specified element at the front
	}
	print(d);

	d.pop_front();
	print(d);                           //Removes the first element

	return 0;
}
