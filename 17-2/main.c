#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[20], c;
    int count=0;
    printf("Enter any string : ");
    scanf("%s",s);
    fflush(stdin);
    printf("Enter character to search : ");
    scanf("%c",&c);
    int l=strlen(s);
    for(int i=0;i<l;i++)
        if(c==s[i])
            count++;
    printf("The occurrence of a given character in a given string : %d",count);
    return 0;
}
