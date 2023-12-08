/* check wheater a number is even or odd with using ' %' in program*/
#include <stdio.h>
int main()
{int num ;
 while (1)
 {
    /* code */
 
    printf("enter a number \n");
scanf(" %d",&num);

if ( num & 1)
{
printf(" the number is odd\n");
}
 else
 {
      printf(" the number is even\n");  
 }
 } 
}
