//since we are going to use the printf() function in our code, we must first include the header file stdio.h
#include <stdio.h>

//using the main() function
int main()
  
//start block of code
  
{
//first,we create an integer variable, we give it a name x, then assign the integer 5 as it's value
int x = 5;

//next we create a pointer and we name it as ptr , then we assign it to the address to our variable x
int *ptr = &x;

//we now try to access the value of the pointer using the deference operator
printf("The value of x is %d", *ptr);

//return value
return 0;

//end block of code
  
}
