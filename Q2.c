/* CS261- Assignment 1 - Q.2*/
/* Name: Michael McCabe
 * Date: 04/10/2018
 * Solution description:
 */
#include <stdio.h>
#include <stdlib.h>

int foo(int* a, int* b, int c){

    /* Increment a */
    *a = *a + 1;
    
    /* Decrement  b */
    *b = *b - 1;
    
    /* Assign a+b to c */
    c = *a + *b;
    
    /* Return c */
    return c;
}

int main(){
    /* Declare three integers x,y and z and initialize them randomly to values in [0,10] */
    int x = rand() % 10;
    int y = rand() % 10;
    int z = rand() % 10;
    
    
    /* Print the values of x, y and z */
    printf("x: %d \n", x);

    printf("y: %d \n", y);

    printf("z: %d \n", z);
    
    /* Call foo() appropriately, passing x,y,z as parameters */

    int fooValue = foo(&x, &y, z);
    
    /* Print the values of x, y and z */
    printf("x: %d \n", x);

    printf("y: %d \n", y);

    printf("z: %d \n", z);
    
    /* Print the value returned by foo */
    printf("int return value of foo: %d \n", fooValue);

    
    return 0;
}
    
    

