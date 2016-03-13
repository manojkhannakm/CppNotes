/*
 * @Author: Manoj Khanna
 */

#include <cstdio>
#include <list>

using namespace std;

void print(list<int> l)
{
	for (list<int>::iterator i = l.begin(); i != l.end(); ++i)
	{
		printf("%d ", *i);
	}
	printf("\n");
}

bool remove_if_pred(int i)
{
	return i == 20;
}

bool unique_pred(int i, int j)
{
	return i == j;
}

int main()                                                      //Look into vector for the remaining functions
{
	list<int> l1(3, 10);
	print(l1);

	list<int> l2(5, 20);
	print(l2);

	l1.splice(l1.end(), l2);                                    //Moves all the elements from the specified list to the specified position
	print(l1);
	print(l2);

	l2.splice(l2.end(), l1, --l1.end());                        //Moves the specified element from the specified list to the specified position
	print(l1);
	print(l2);

	l2.splice(l2.end(), l1, ++++++l1.begin(), l1.end());        //Moves the specified range of elements from the specified list to the specified position
	print(l1);
	print(l2);

	l1.remove(10);                                              //Removes all occurrence of the specified element
	print(l1);

	l2.remove_if(remove_if_pred);                               //Removes all occurrence of the elements which matches the specified predicate
	print(l2);

	int arr[] = {10, 20, 20, 10, 30};
	l1 = list<int>(arr, arr + 5);
	print(l1);

	l1.unique();                                                //Removes all consecutive duplicate elements
	print(l1);

	l1.insert(++++l1.begin(), 20);
	print(l1);

	l1.unique(unique_pred);                                     //Removes all consecutive duplicate elements which matches the specified predicate
	print(l1);

	l2 = list<int>(5, 20);
	print(l2);

	l1.merge(l2);                                               //Moves all the elements from the specified list to the end
	print(l1);
	print(l2);

	l1.sort();                                                  //Sorts the list
	print(l1);

	l1.reverse();                                               //Reverses the list
	print(l1);

	return 0;
}
