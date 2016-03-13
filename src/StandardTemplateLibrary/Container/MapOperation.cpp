/*
 * @Author: Manoj Khanna
 */

#include <cstdio>
#include <map>
#include <utility>

using namespace std;

void print(map<char, int> m)
{
	for (map<char, int>::iterator i = m.begin(); i != m.end(); ++i)
	{
		printf("%c-%d ", i->first, i->second);
	}
	printf("\n");
}

int main()
{
	map<char, int> m;
	m.insert(pair<char, int>('a', 10));                                                 //Insertion type 1
	m.insert(make_pair('c', 30));                                                       //Insertion type 2
	m.insert(make_pair('c', 40));                                                       //Not inserted as the key already exist
	m['b'] = 20;                                                                        //Insertion type 3
	print(m);

	// int i = m['z'];                                                                  //Creates an element with default value(0) and returns its value

	printf("%d\n", m.find('a')->second);                                                //Returns an iterator to the element if it exist else end
	if (m.find('d') == m.end())
	{
		printf("Element does not exist\n");
	}

	printf("%d\n", m.count('a'));                                                       //Returns 1 if the element exist else 0

	m.erase('a');
	print(m);

	printf("%d\n", m.lower_bound('b')->second);                                         //Returns an iterator to the element with the specified key or the next nearest element or end

	printf("%d\n", m.upper_bound('b')->second);                                         //Returns an iterator to the next nearest element to the element with the specified key or end

	pair<map<char, int>::iterator, map<char, int>::iterator> p = m.equal_range('b');    //Returns the lower and upper bound as a pair of iterators
	for (map<char, int>::iterator i = p.first, j = ++p.second; i != j; ++i)
	{
		printf("%c-%d ", i->first, i->second);
	}
	printf("\n");

	return 0;
}
