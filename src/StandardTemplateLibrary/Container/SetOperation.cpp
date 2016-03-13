/*
 * @Author: Manoj Khanna
 */

#include <cstdio>
#include <set>

using namespace std;

void print(set<int> s)
{
	for (set<int>::iterator i = s.begin(); i != s.end(); ++i)
	{
		printf("%d ", *i);
	}
	printf("\n");
}

int main()
{
	set<int> s;
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(20);                                               //Not inserted as the element already exist
	print(s);

	if (s.find(40) == s.end())
	{
		printf("Element does not exist\n");
	}

	return 0;
}
