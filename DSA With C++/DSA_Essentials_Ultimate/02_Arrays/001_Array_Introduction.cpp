/* ARRAYS INTRODUCTION */
/* An array is a collection of elements of the same type placed in contiguous memory locations 

    ---->Input
    ---->Output
    ---->Creation
    ---->Update
*/

/* Character array ---->Terminated by NULL Character...('\0') */

/* CREATING AN ARRAY*/
/* data_type array_name[size] */

/* 
int a[100];
        ----> Allocate a memory of (4x100) = 400 bytes & contains Garbage...

int a[100] = {0};
        ----> Allocates first address to 0 and remains also 0's...

int a[100] = {1, 2, 3};
        ----> Allocates first address to 1, second to 2, third to 3 and remain addresses to 0's...

int a[] = {1, 2, 3};
        ----> Here, giving the  size of array is Optional. The first address is intializes to 1 , second to 2, third to 3...

string fruits[4] = {"apple", "mango", "guava"}
        ----> Array of Strings...
 */