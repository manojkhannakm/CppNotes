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
	vector<int> v1(3, 10);
	print(v1);

	vector<int> v2(5, 20);
	print(v2);

	v1.assign(v2.begin(), v2.begin() + 3);      //Destroys all current elements and adds the specified range of elements
	print(v1);
	print(v2);

	v1.push_back(30);                           //Adds the specified element at the back
	print(v1);

	v1.pop_back();                              //Removes the last element
	print(v1);

	v1.insert(v1.begin() + 2, 30);              //Adds the specified element at the specified position
	print(v1);

	v1.insert(v1.begin(), 3, 30);               //Adds the specified no. of specified element at the specified position
	print(v1);

	v1.insert(v1.end(), v2.begin(), v2.end());  //Adds the specified range of elements at the specified position
	print(v1);

	v1.erase(v1.begin());                       //Removes the element at the specified position
	print(v1);

	v1.erase(v1.begin(), v1.begin() + 2);       //Removes the specified range of elements
	print(v1);

	v1.swap(v2);                                //Swaps the elements of both the vectors
	print(v1);
	print(v2);

	v1.clear();                                 //Removes all the elements
	printf("%d\n", v1.size());

	return 0;
}
