#include <stdio.h>

//  program to calculate area of triangle and rectangle

int tri(int x,int w){
int area= x*w/2;
return (area);
}
int rect(int y ,int z){
int ar=y*z;
return(ar);

}
int main(int argc, char const *argv[])
{
    char  r, t;
    int type, base, hgt, area;
    printf(" select whose area to calculate [ triangle (1) or rectangle (2)\n");
    scanf("%d", &type);
    switch (type)
    {
    case 2:
        printf(" you have selcted rectangle \n");
        printf(" enter the values of base and side\n");
        scanf(" %d%d", &base, &hgt);
        area = rect( base,hgt);
        printf(" area of rectangle =%d\n", area);
    
        break;
    
    case 1:
       printf(" you have selcted triangle \n" );
        printf(" enter the values of base and side\n");
        scanf(" %d%d", &base, &hgt);
        area = tri( base,hgt);
        printf(" area of triangle =%d\n", area);
    
        break;
    
    default: printf(" invalid code\n");
        break;
    }
    
        
    

    return 0;
}


// int main(int argc, char const *argv[])
// {
//     // program to calculate area of triangle 
//     int area, h, b;
// printf(" wlc to area calculator of triangle\n");
//     printf(" enter the values of base and height\n");
//     scanf(" %d%d", &b, &h);

//     area = b * h / 2;
// printf(" area of triangle is =%d\n",area);
//     return 0;
// }
