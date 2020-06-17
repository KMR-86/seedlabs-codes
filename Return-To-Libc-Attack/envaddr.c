#include<stdio.h>
#include<stdlib.h>

int main(){

	char *shell=(char *) getenv("MYSHELL");
	if(shell){
		printf(" value: %s\n", shell);
		printf(" address: %x\n", (unsigned int)shell);	
	
	}
	return 1;


}

