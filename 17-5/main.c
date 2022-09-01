#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[20];
    printf("Enter any string : ");
    fflush(stdin);
    fgets(c,20,stdin);
    for(int i=0;c[i]!='\0';i++)
        if(c[i]!=' '&& c[i]>=65 && c[i]<=90)
            c[i]=c[i]+32;
    printf("The given string in Lowercase : %s",c);
    return 0;
}
