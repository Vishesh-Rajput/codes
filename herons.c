#include <stdio.h>

// programe to calculate area of triangle by HERONS FORMULA 

#include<math.h>
int main(int argc, char const *argv[])
{float a,b,c,s,area;
    printf(" enter values of three side of triangle [a,b,c]\n");
scanf(" %f%f%f",&a,&b,&c);
s= a+b+c;

printf(" area of triangle of sides %f,%fand%f is\n",a,b,c);

area= sqrt((s*(s-a)*(s-b)*(s-c)));

printf(" =%f",area);

    return 0;
}
