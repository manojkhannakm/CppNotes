/*
 * @Author: Manoj Khanna
 */

#include <cstdio>

int main()
{
	char filename[] = "file.txt";

	remove(filename);                        //Deletes file

	FILE *f = fopen(filename, "a+");         //Opens file for appending
	fputs("Hello world!", f);
	fclose(f);

	f = fopen(filename, "r");                //Opens file for reading
	char str[100];
	fgets(str, 100, f);
	printf("%s\n", str);
	fclose(f);

	f = fopen(filename, "w");                //Opens file for writing
	fprintf(f, "%s", "10, 20, 30");
	fclose(f);

	f = fopen(filename, "r");                //Opens file for reading
	int n1, n2, n3;
	fscanf(f, "%d, %d, %d", &n1, &n2, &n3);
	printf("%d %d %d\n", n1, n2, n3);
	fclose(f);

	return 0;
}
