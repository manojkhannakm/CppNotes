/*
 * @Author: Manoj Khanna
 */

#include <cstdio>
#include <fstream>

using namespace std;

int main()
{
	string filename = "file.txt";

	ifstream in(filename);              //Opens file for reading
	int n = 0;
	while (in >> n)                     //Reads till last line
	{
	}
	in.close();

	ofstream out;
	out.open(filename, ios::app);       //Creates or opens file for appending
	out << n + 1 << endl;
	out.close();

	return 0;
}
