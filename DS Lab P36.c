/// String Palindrome
#include<stdio.h>
int main()
{
int i,j,k,m,count=0;
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
for(j=0;j<=i;j++)
{
    if(rev[j]==str[j])
    {
        count++;
    }
}
if(count==i+1)
    printf("Palindrome");
else
    printf("Not Palindrome");
}
