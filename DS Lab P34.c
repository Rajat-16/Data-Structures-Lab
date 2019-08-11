/// Finding length of string
#include<stdio.h>
main()
{
    int i;
    char str[20];
    printf("Enter String\n");
    scanf(" %s",&str);
    i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    printf("\nLength of string is \n%d",i);

}
