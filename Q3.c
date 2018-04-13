/* CS261- Assignment 1 - Q.3*/
/* Name: Michael McCabe
 * Date: 4/12/2018
 * Solution description:
 */
 
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

struct student{
	int id;
	int score;
};

void sort(struct student* students, int n){
     /*Sort the n students based on their score*/ 

	/*selection sort: https://www.geeksforgeeks.org/bubble-sort/ */
	/*chosen just because it's easy not because it's good */

	int i, j;

	for (int i = 0; i < n - 1; i++){
		for (j = 0; j < n - i - 1; j++ )
			if( students[j].score > students[j+1].score) {
				struct student temp = students[j];
				students[j] = students[j+1];
				students[j+1] = temp;
			}

	}

}

int main(){
	/*Declare an integer n and assign it a value.*/
	int n = 20; 
    
    /*Allocate memory for n students using malloc.*/
    struct student* students = malloc(n * sizeof(struct student));
    
    /*Generate random and unique IDs and random scores for the n students, using rand().*/
    for (int i = 1; i <= n; i++){
	    students[i-1].id = i;
	    students[i-1].score = rand() % 100;
  	}
    
     /*shuffle IDs*/
  	int i, j, temp;

 	 /*Source: https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle*/
 	for (i = n - 1; i > 0; i--){
	    j = rand() % (i + 1);
	    temp = students[j].id;
	    students[j].id = students[i].id;
	    students[i].id = temp;
 	}


    /*Print the contents of the array of n students.*/
    printf("==STUDENTS==\n");
   	printf("ID SCORE\n");
  	
  	for (int i = 0; i < n; i++){
    	printf("%d %d \n", students[i].id, students[i].score);
  	}

    /*Pass this array along with n to the sort() function*/
    sort(students, n);

    /*Print the contents of the array of n students.*/
    printf("==STUDENTS==\n");
   	printf("ID SCORE\n");
  	
  	for (int i = 0; i < n; i++){
    	printf("%d %d \n", students[i].id, students[i].score);
  	}
    
    return 0;
}
