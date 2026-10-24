#include <stdio.h>
#include <string.h>

void uppercase(char str[])
{
    int i=0;
    while(str[i]!='\0')

    if(str[i]>='a' && str[i]<='z')
    {
        str[i]=str[i]-32;
        i++;
    }
    
}

int main()
{
    char str[30];
    printf("enter a string");
    scanf("%29s",&str);
    uppercase(str);
    printf("transfer string is %s\n",str);
    return 0;
}
