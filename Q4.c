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

	char* tempString = word;
	
	while(tempString[count]){
		if (tempString[count] == '_'){
			underScoreCount++;
		}

		else{
			word[count - underScoreCount] = tempString[count];

			if(tempString[count - 1] == '_' && underScoreCount > 0){
				word[count - underScoreCount] = toUpperCase(word[count - underScoreCount]);
			}
		}

		count++;

		/* peak null *, terminate string early*/
		if(tempString[count + 1] == 0){
			word[count - underScoreCount + 1] = 0;
		}
	}
}



int main(){
    /*Read the string from the keyboard */
    char mystring[20] = "i___am__god";

    /*Call camelCase*/
    camelCase(mystring);
    
    /*Print the new the string */
    printf("%s\n", mystring);
    
    return 0;
}