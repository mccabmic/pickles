/* CS261- Assignment 1 - Q.0*/
/* Name: Michael McCabe
 * Date: 04/09/2018
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>

void fooA(int* iptr){
     /*Print the value of iptr*/
     printf("Value of iptr: %p \n", iptr);

     /*Print the address pointed to by iptr*/
     printf("Value that iptr points to: %d \n", *iptr);

     /*Print the address of iptr itself*/
     printf("Address of iptr itself: %p \n", iptr);
     
     /*Change the value of iptr itself*/
     *iptr = 100;
         
}

int main(){
    
    /*declare an integer x and initialize it randomly to a value in [0,10] */
    int x = rand() % 10;

    /*Print the address of x*/
    printf("Address of X: %p \n", &x);
    
    /*Call fooA() with the address of x*/
    fooA(&x);
    
    /*Print the value of x*/
    printf("Value of X: %d \n", x);

    /*I expect that the value of iptr would be changed to 100 as I accessed the memory
     of x in fooA and changed the value stored there directly*/
    
    return 0;
   
    
}


