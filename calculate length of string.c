#include<stdio.h>
#include<string.h>
int length()
{
    char str[30];
    int i,l;
    printf("enter a siring");
    fgets(str,30,stdin);
    l=strlen(str);
    return l;
}

int main()
{
   
    int l;
   l=length();
   printf("length of string %d\n",l);
    return 0;
}