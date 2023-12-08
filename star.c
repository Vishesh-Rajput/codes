#include <stdio.h>
int upstar(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i + j >= num - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int downstr(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i + j <= num - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main()
{

    int num, type;
    printf(" press(1) to print upward star triangle   patter \n");
    printf(" press(2) to print downward star triangle pattern \n");
    scanf(" %d", &type);

    switch (type)
    {
    case 1:
        printf(" enter the number of rows \n");
        scanf("%d", &num);
        upstar(num);
        break;

    case 2:
        printf(" enter the number of rows \n");
        scanf("%d", &num);
        downstr(num);
        break;

    default:
        printf(" you are idiot\n");
        break;
    }

    return 0;
}
