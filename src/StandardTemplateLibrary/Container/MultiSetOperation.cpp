/*
 * @Author: Manoj Khanna
 */

#include <cstdio>
#include <set>

using namespace std;

void print(multiset<int> s)
{
	for (multiset<int>::iterator i = s.begin(); i != s.end(); ++i)
	{
		printf("%d ", *i);
	}
	printf("\n");
}

int main()
{
	multiset<int> s;
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(20);
	print(s);

	pair<multiset<int>::iterator, multiset<int>::iterator> p = s.equal_range(20);
	for (multiset<int>::iterator i = p.first; i != p.second; ++i)
	{
		printf("%d ", *i);
	}
	printf("\n");

	return 0;
}
