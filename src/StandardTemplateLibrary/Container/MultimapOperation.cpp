/*
 * @Author: Manoj Khanna
 */

#include <cstdio>
#include <map>

using namespace std;

void print(multimap<char, int> m)
{
	for (multimap<char, int>::iterator i = m.begin(); i != m.end(); ++i)
	{
		printf("%c-%d ", i->first, i->second);
	}
	printf("\n");
}

int main()
{
	multimap<char, int> m;
	m.insert(make_pair('a', 10));
	m.insert(make_pair('a', 30));
	m.insert(make_pair('a', 20));
	m.insert(make_pair('b', 40));
	m.insert(make_pair('b', 60));
	m.insert(make_pair('b', 50));
	m.insert(make_pair('c', 70));
	m.insert(make_pair('c', 90));
	m.insert(make_pair('c', 80));
	print(m);

	printf("%d\n", m.find('a')->second);

	printf("%d\n", m.count('a'));

	pair<multimap<char, int>::iterator, multimap<char, int>::iterator> p = m.equal_range('a');
	for (multimap<char, int>::iterator i = p.first; i != p.second; ++i)
	{
		printf("%c-%d ", i->first, i->second);
	}
	printf("\n");

	return 0;
}
