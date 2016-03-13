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
	vector<int> v1;                             //Type 1
	printf("%d\n", v1.size());

	vector<int> v2(5);                          //Type 2
	print(v2);

	vector<int> v3(5, -1);                      //Type 3
	print(v3);

	vector<int> v4(v2.begin(), v2.begin() + 3); //Type 5
	print(v4);

	vector<int> v5(v2);                         //Type 5
	print(v5);

	return 0;
}
