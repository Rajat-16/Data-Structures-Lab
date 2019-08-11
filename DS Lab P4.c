#include<stdio.h>
main()
{
    int a[20],i,n,element;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to search\n");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(element==a[i])
        {
            printf("Element found at position %d",i+1);
            break;
        }
    }
    if(i==n)
        printf("Element not found");


}
