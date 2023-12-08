#include <stdio.h>
int main()
 {
     char ch ;
     printf(" enter a charcter\n");
     scanf(" %c",&ch);
    if (ch >= 'a'&& ch <= 'z')
    {
    ch =ch -32;
    }
     else { ch }
     printf(" the upper case of is %c\n",ch+32
     );
     return 0;
}
