#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    char *words[] = {" apple", " banana", "grape", "peach"};
    int num = sizeof(words) / sizeof(words[0]); // size of array is divded by size of one element 

    srand(time(NULL));
    int index = rand() % num; //the index of words = random function chossing from index 

    printf(" the fruit is : %s\n", words[index]);

    return 0;
}
