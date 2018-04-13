#include <stdio.h>
#include <string.h>

void main(){
	int i = -5;

	char mystring[20];

	strcpy(mystring, "my string");

	printf("Char => Int :: ASCII TableLookup\n");

	for (int i = 0; i < 20 - 1; i++){
		printf("%c   =>  %d\n", mystring[i], mystring[i]);
	}


}
