/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

class Exception
{

public:

	float f;

	Exception(float x): f(x)
	{
	}

};

void do_throw() throw(int, Exception)                       //This fn can only throw int and Exception
{
	throw Exception(20.0f);
}

int main()
{
	int n;
	printf("Enter a no.: ");
	scanf("%d", &n);

	try
	{
		switch (n)
		{

			case 1:
				throw 10;

			case 2:
				do_throw();

			case 3:
				throw 30.0f;

		}
	}
	catch (int i)
	{
		printf("Exception caught with code %d\n", i);

		throw;                                          //Re-throws the exception
	}
	catch (Exception e)
	{
		printf("Exception caught with code %f\n", e.f);
	}
	catch (...)                                         //Catches all exceptions
	{
		printf("Exception caught\n");
	}

	return 0;
}
