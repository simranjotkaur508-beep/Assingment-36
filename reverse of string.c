#include<stdio.h>
#include<string.h>
int reverse()
{
    char str[100];
    int i,l;
    printf("enter a number");
   
    {
    fgets(str,100,stdin);
    l=strlen(str);

    if(l>0 && str[l-1]=='\n')
    {
        str[--l]=0;
    }
    }
   
    printf("str");
    for(i=l-1;i>=0;i--)
    
    return str[i];
}

int main()
{
     char str[100];
    int i,l;
    printf("reverse of string %c",str[i]);
    return 0;
}