#include<stdio.h>
int factorial(int);
main()
{
    int num,fac;
    printf("Enter the number\n");
    scanf("%d",&num);
    fac=factorial(num);
    printf("Factorial is %d",fac);
}
int factorial(int n)
{
    if(n==0)
        return 1;
    else
            return n*factorial(n-1);

}
