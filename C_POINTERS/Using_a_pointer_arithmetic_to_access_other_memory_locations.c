//since we are going to use the printf() function in our code, we must first include the header file stdio.h
#include <stdio.h>

//using the main() function
int main()
  
//start block of code
  
{
  
  //first we create a  variable named A that stores an array of 5 integer values
int A[5] = {1,2,3,4,5};
 
  //then we create a pointer named P, then assign to it the address to our variable A
int *P = &A[0];
  
  //next we now try to access the pointer arithmetic
printf("%d", *(P+2)); //this will print 3
  
//return value
return 0;

//end block of code
  
}
