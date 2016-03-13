/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

class Class
{

	int i;

public:

	void run() const
	{
		// i = 20;      //Const fn cannot modify the class vars as the 'this' ptr here is const
	}

};

// void run()           //Non-member fn cannot const
// {
// }

int main()
{
	Class obj;
	obj.run();

	return 0;
}
