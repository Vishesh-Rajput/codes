#include <stdio.h>
 /* program to swap two values without the third variable */
/*
a=20 b=30
a=50 b=30
a=50 b=20
a =30 b=20
*/
int main(int argc, char const *argv[])
{
    int a, b;
    printf(" enter two numbers\n");
    scanf("%d%d", &a, &b);

    a = a + b;
    b = a - b;
a= a-b ;
     printf("  a=%d b=%d\n",a,b);
     return 0;
}
// the code is ready

