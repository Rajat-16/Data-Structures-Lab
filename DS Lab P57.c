#include<stdio.h>
int power(int,int);
main()
{
    int a,n,result;
    printf("Enter the number and its power\n");
    scanf("%d %d",&a,&n);
    result=power(a,n);
    printf("%d",result);

}
int power(int a,int n)
{ int b;
if(n==0)
    return 1;
else
    b=a*power(a,n-1);
return b;
}
