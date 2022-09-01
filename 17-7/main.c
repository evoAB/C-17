#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[20];
    printf("Enter string : ");
    scanf("%s",c);
    int countA=0,countN=0,countS=0;
    for(int i=0;c[i]!='\0';i++)
        if((c[i]>='A' && c[i]<='Z')||(c[i]>='a' && c[i]<='z'))
            countA++;
        else if(c[i]>='0' && c[i]<='9')
                countN++;
            else
                countS++;
    printf("Alphabet = %d\nNumber = %d\nSpecial Character = %d",countA,countN,countS);
    return 0;
}
