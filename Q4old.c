/* CS261- Assignment 1 - Q.4*/
/* Name: Michael McCabe
 * Date: 4/12/2018
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>

/*converts ch to upper case, assuming it is in lower case currently*/
char toUpperCase(char ch){
     return ch-'a'+'A';
}


void camelCase(char* word){
     /*Convert to camelCase*/
	int count = 0;
	int underScoreCount = 0;

	char tempString[50];
	
	while(word[count]){
		if (word[count] == '_'){
			underScoreCount++;
		}

		else{
			tempString[count - underScoreCount] = word[count];

			if(word[count - 1] == '_' && underScoreCount > 0){
				tempString[count - underScoreCount] = toUpperCase(tempString[count - underScoreCount]);
			}
		}

		count++;

		/* peak null *, terminate string early*/
		if(word[count + 1] == 0){
			tempString[count - underScoreCount + 1] = 0;
		}
	}

	printf("%s\n", tempString);
}



int main(){
    /*Read the string from the keyboard */
    char mystring[20] = "__i_am_god";

    /*Call camelCase*/
    camelCase(mystring);
    
    /*Print the new the string */
    printf("%s\n", mystring);
    
    return 0;
}