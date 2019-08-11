#include<stdio.h>
int gcd(int,int);
main()
{
    int num1,num2,result;
    printf("Enter numbers");
    scanf("%d %d",&num1,&num2);
    result=gcd(num1,num2);
    printf("%d",result);

}
gcd(int num1,int num2)
{
  if(num1==num2)
        return num1;
  else
    if(num1>num2)
    return (gcd(num1-num2,num2));
  else
    return (gcd(num2-num1,num1));
}
