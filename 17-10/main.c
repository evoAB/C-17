#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[20];
    int freq[123]={0};
    printf("Enter string : ");
    scanf("%s",c);
    int l=strlen(c);
    for(int i=0; i<l; i++)
    {
        freq[c[i]]++;
    }
    for(int i=0; i<123; i++)
        if(freq[i]>0)
            printf("\n%c = %d",i,freq[i]);
    return 0;
}
