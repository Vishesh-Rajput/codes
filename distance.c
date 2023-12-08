#include <stdio.h>
// program to find area between two points
#include<math.h>
int main()
{int x2,y2,sum, x1,y1;
  printf(" enter cordinated of point A [x,y]\n");
scanf("%d%d",&x1,&y1);
printf(" enter the cordinates of point B\n");
scanf(" %d%d",&x2,&y2);

 printf("the distance between points(%d,%d) and (%d,%d)  is\n", x1,y1,x2,y2);

 sum=sqrt( pow((x2-x1),2)+ pow((y2-y1),2));

 printf(" = %d\n",sum); 


    return 0;
}


