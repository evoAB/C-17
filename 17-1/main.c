#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[20],count=0;
    printf("Enter any string : ");
    fgets(s,20,stdin);
    for(int i=1; s[i]!='\0'; i++)
        count++;
    printf("Length of string : %d",count);
    return 0;
}
