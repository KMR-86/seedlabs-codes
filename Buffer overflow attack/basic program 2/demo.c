#include <stdlib.h>

#include <stdio.h>

#include <string.h>



int foo(char *str)

{
	int extra=0;
	int temp=0;
	char buffer[100];

	/* The following statement has a buffer overflow problem */

	strcpy(buffer, str);

	return 0;

}



int main(int argc, char **argv)

{

	char str[300];

	FILE *badfile;

	badfile = fopen("badfile", "r");

	fread(str, sizeof(char), 300, badfile);

	foo(str);

	printf("Returned Properly\n");

	return 0;

}
