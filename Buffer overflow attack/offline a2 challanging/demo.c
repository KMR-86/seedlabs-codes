#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int copy(char *str)
{
    char buffer[1000];

    strcpy(buffer, str);
    return 1;
}

int safe_copy(char *str)
{
	int ln = strlen(str);
    char buffer[ln];

    strcpy(buffer, str);
    return 1;
}

int main(int argc, char **argv)
{
    char str[400];
    FILE *badfile;

	copy("Roses are red, violets are blue, long long ago I had time to breathe :(");
	printf("This should return properly\n");

    badfile = fopen("input","r");
    fread(str, sizeof(char), 1200, badfile);

	safe_copy(str);
	printf("This should also return properly\n");

    copy(str);
	printf("You shall not pass\n");
    return 1;
}
