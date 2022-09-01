#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[20];
    printf("Enter string : ");
    fflush(stdin);
    fgets(c,20,stdin);
    int l=strlen(c);
    for(int i=0;i<l/2;i++)
    {
        int temp=c[i];
        c[i]=c[l-i-1];
        c[l-i-1]=temp;
    }
    printf("Reverse a string : %s",c);
    return 0;
}
