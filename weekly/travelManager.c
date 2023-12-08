/* you manage a travel aggency
 take inputs from drivers of the following data
 name
  licsnse no.
  route
  kms traveled

 the number of drivers is 3
make it in a useable manner

*/
#include <stdio.h>
#include <string.h>
int main()
{ int i=0;
    do
    {
        /* code */
    
    struct data
    {
        char name[15];
        int licNo;
        char route[20];
        float kms;

    } d1, d2, d3;
    printf("enter your drivers code [1,2,3] \n");
    int code;
    scanf("%d", &code);
    switch (code)
    {
    case 1:
        printf(" enter your name\n");
        scanf("%s", &d1.name);
        printf(" enter your licence number\n");
        getchar();
        scanf("%d", &d1.licNo);
        printf(" enter your route\n");
        scanf("%s", &d1.route);
        printf(" enter  KMs traveled soo far\n");
        scanf(" %f", &d1.kms);
// printing the values
printf(" name = %s\n", d1.name);
    printf(" license = %d\n", d1.licNo);

    printf(" route = %s\n", d1.route);
    printf(" kms = %.3f\n", d1.kms);


        break;

    case 2:
        printf(" enter your name\n");
        scanf("%s", &d2.name);
        printf(" enter your licence number\n");
        scanf("%d", &d2.licNo);
        printf(" enter your route\n");
        scanf("%s", &d2.route);
        printf(" enter  KMs traveled soo far\n");
        scanf(" %f", &d2.kms);
// print
printf(" name = %s\n", d2.name);
    printf(" license = %d\n", d2.licNo);

    printf(" route = %s\n", d2.route);
    printf(" kms = %.3f\n", d2.kms);

        break;
    case 3:
        printf(" enter your name\n");
        scanf("%s", &d3.name);
        printf(" enter your licence number\n");
        scanf("%d", &d3.licNo);
        printf(" enter your route\n");
        scanf("%s", &d3.route);
        printf(" enter  KMs traveled soo far\n");
        scanf(" %f", &d3.kms);
    //    print
    printf(" name = %s\n", d3.name);
    printf(" license = %d\n", d3.licNo);

    printf(" route = %s\n", d3.route);
    printf(" kms = %.3f\n", d3.kms);
    
        break;
    default:
        printf(" invalid code\n");
        break;
    }
i++;
    
    } while ( i<3/* condition */);
    return 0;
}
// the code is ready
