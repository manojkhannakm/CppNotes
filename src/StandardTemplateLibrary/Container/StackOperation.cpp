/*
 * @Author: Manoj Khanna
 */

#include <cstdio>
#include <stack>

using namespace std;

int main()
{
	stack<int> s;
	for (int i = 1; i <= 3; ++i)
	{
		int n = i * 10;
		printf("%d ", n);

		s.push(n);                  //Adds the specified element at the back
	}
	printf("\n");

	while (!s.empty())
	{
		printf("%d ", s.top());

		s.pop();                    //Removes the first element
	}
	printf("\n");

	return 0;
}
