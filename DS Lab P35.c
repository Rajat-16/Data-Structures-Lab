#include<stdio.h>
int main()
{
int i,j,k;
char str[20],rev[20];
printf("Enter string\n");
scanf("%s",&str);
for(i=0;str[i]!='\0';)
{
    i++;
}
k=0;
for(j=i-1;j>=0;j--)
{
    rev[k]=str[j];
    k++;
}
rev[k]='\0';
printf("Reversed string is \n%s",rev);
}
