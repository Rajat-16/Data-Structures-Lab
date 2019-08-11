#include<stdio.h>
#include<string.h>
main()
{
int i;
char str[200];
printf("Enter the Sentence\n");
gets(str);
for(i=0;i<strlen(str);i++)
{
if(65<=str[i]&&str[i]<=90)
{
    str[i]=str[i]+32;
}

else if(97<=str[i]&&str[i]<=122)
{
    str[i]=str[i]-32;
}

}
puts(str);
}
