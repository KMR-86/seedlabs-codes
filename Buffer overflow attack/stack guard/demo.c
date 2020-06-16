#include <stdlib.h>

#include <stdio.h>

#include <string.h>


int secret=5031;
int activate_canary=1;


int foo(char *str)

{
	int guard=secret;
	char buffer[100];

	/* The following statement has a buffer overflow problem */

	strcpy(buffer, str);

	if(guard!=secret && activate_canary==1){
		printf("the stack is smashed, activate buffer overflow countermeasures\n");
		exit(1);
	}

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
