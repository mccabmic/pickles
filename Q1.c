/* CS261- Assignment 1 - Q.1*/
/* Name: Michael McCabe
 * Date: 4/9/2018
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct student{
	int id;
	int score;
};

struct student* allocate(){
     /*Allocate memory for ten students*/
    struct student* students = malloc(10 * sizeof(struct student));
     
     /*return the pointer*/
    return students;
}

void generate(struct student* students){
     /*Generate random and unique ID and random scores for ten students, ID being between 1 and 10, scores between 0 and 100*/
  const int arraySize = 10;

  /*generate ID*/
  /*generate score */
  for (int i = 1; i <= arraySize; i++){
    students[i-1].id = i;
    students[i-1].score = rand() % 100;
  }

  /*shuffle IDs*/
  int i, j, temp;

  /*Source: https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle*/
  for (i = arraySize - 1; i > 0; i--){
    j = rand() % (i + 1);
    temp = students[j].id;
    students[j].id = students[i].id;
    students[i].id = temp;
  }   
}

void output(struct student* students){
   /*Output information about the ten students in the format:
              ID1 Score1
              ID2 score2
              ID3 score3
              ...
              ID10 score10*/

  const int arraySize = 10;

  printf("==STUDENTS==\n");
   printf("ID SCORE\n");
  for (int i = 0; i < arraySize; i++){
    printf("%d %d \n", students[i].id, students[i].score);
  }
    
}

void summary(struct student* students){
     /*Compute and print the minimum, maximum and average scores of the ten students*/

  int minimum = 10000;
  int maximum = -10000;
  int sumOfScores = 0;
  const int arraySize = 10;

  for (int i = 0; i < arraySize; i++){
    if (students[i].score >= maximum){
      maximum = students[i].score;
    }

    if (students[i].score <= minimum){
      minimum = students[i].score;
    }

    sumOfScores += students[i].score;
  }

  printf("==SCORES==\n");

  double average = (double) sumOfScores / arraySize;
  printf("Minimum: %d \n", minimum);
  printf("Maximum: %d \n", maximum);
  printf("Average: %f \n", average);
     
}

void deallocate(struct student* stud){
  if (stud != NULL){
    free(stud);
  }
}

int main(){
    struct student* stud = NULL;
    
    /*call allocate*/
    stud = allocate();
    
    /*call generate*/
    generate(stud);
    
    /*call output*/
    output(stud);
    
    summary(stud);
    
    /*call deallocate*/
    deallocate(stud);

    return 0;
}
