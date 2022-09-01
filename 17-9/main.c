#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[20];
    printf("Enter string : ");
    scanf("%s",c);
    int l=strlen(c);
    for(int i=0 ;i<l-1;i++)
    {
        for(int j=i;j<l;j++)
        {
            if(c[i]>c[j])
            {
                char temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("String in Ascending order = %s",c);
    return 0;
}
