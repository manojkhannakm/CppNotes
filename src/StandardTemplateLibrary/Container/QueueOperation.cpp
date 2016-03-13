/*
 * @Author: Manoj Khanna
 */

#include <cstdio>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;
	for (int i = 1; i <= 3; ++i)
	{
		int n = i * 10;
		printf("%d ", n);

		q.push(n);                  //Adds the specified element at the back
	}
	printf("\n");

	while (!q.empty())
	{
		printf("%d ", q.front());

		q.pop();                    //Removes the first element
	}
	printf("\n");

	return 0;
}
