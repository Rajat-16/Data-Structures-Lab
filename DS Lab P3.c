#include<stdio.h>
main()
{
    int a[20],n,i,j;
    printf("Enter no of elements in array\n");
    scanf("%d",&n);
    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                a[j]='X';
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!='X')
        printf("%d\t",a[i]);

}
}
