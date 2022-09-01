#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[20],s[20];
    printf("Enter string : ");
    scanf("%s",c);
    strcpy(s,c);
    printf("Copied string : %s",s);
    return 0;
}
