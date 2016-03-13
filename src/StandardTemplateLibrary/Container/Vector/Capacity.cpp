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
	vector<int> v(5);
	printf("%d\n", v.size());           //Returns size

	v.resize(3);                        //Shrinks to size 3 and destroys remaining elements
	print(v);

	v.resize(5, -1);                    //Expands to size 5 and add -1 as remaining elements
	print(v);

	printf("%d\n", v.empty());          //Returns true if size is zero else false

	return 0;
}
