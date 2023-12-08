/* check wheater a number is a plindrome or not
( i.e is same when revered )
*/
#include <stdio.h>
int plindromeCheck(int n)
{
    int original_num = n;
    int reveresed = 0;
    while (n != 0)
    {
        reveresed = reveresed * 10 + n % 10;
        n = n / 10;
    }
    printf(" the reversed number is %d\n", reveresed);
    if (original_num == reveresed)
    {
        return 1;
    }
    else
    {
        return 0 ;
    }
    
}
int main()


{
    while (1){
    

    int num;
    printf("enter a number \n");
    scanf("%d", &num);
 if ( plindromeCheck(num) == 1)     
 {
printf(" the number is a plindrome\n");

 }
else
{
printf(" the number is NOT a plindrome\n");
    
}
 }
    return 0;

}
