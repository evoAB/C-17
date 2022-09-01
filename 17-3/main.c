#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50];
    int count=0;
    printf("Enter any string : ");
    scanf("%s",s);
    for(int i=0; s[i]; i++)
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='o' ||s[i]=='O' || s[i]=='u' || s[i]=='U')
            count++;
    printf("Vowels : %d",count);
    return 0;
}
