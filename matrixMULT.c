/*take input from the user  the number of rows and number of columns
and check if multiplication is possible  of two matrices or not
if yes the give  the product of matrix*/

#include <stdio.h>
#include <string.h>


int main()

{int m,n,p,q;
    printf(" enter the number of rows  and columns of A matrix  of order MxN\n");
    scanf("%d%d",&m,&n);
    
printf(" enter the number of rows and columns of B matrix  of order PxQ\n");
    scanf("%d%d",&p,&q);
    if (n==p    )
    {
printf(" multiplication is possible\n");
 int mat1[m] [n] ;
for (int i = 1; i <= x; i++)
{
    printf(" enter the a%d value of mat \n ",i);
    scanf("%d",&mat1[x]);
}

for (int j = 1; j <= y; j++)
{
    printf("  enter the  b%d value of mat  \n ",j);
    scanf("%d",&mat1[y]);   
}
// printf("%d",  ) 
     }
     else
     {
printf(" multiplication is not possible\n");
     }

printf("enter the values of matrix B\n");

 int mat1[m] [n] ;
for (int i = 1; i <= x; i++)
{
    printf(" enter the a%d value of mat \n ",i);
    scanf("%d",&mat1[x]);
}

for (int j = 1; j <= y; j++)
{
    printf("  enter the  b%d value of mat  \n ",j);
    scanf("%d",&mat1[y]);   
}



    return 0;
}
