#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[20];
    printf("Enter any string : ");
    fgets(c,20,stdin);
    for(int i=0;c[i]!='\0';i++)
        if(c[i]!=' '&& c[i]>=97 && c[i]<=122)
            c[i]=c[i]-32;
    printf("The given string in Uppercase : %s",c);
    return 0;
}
