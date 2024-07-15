

#include<stdio.h>
void main()
{
    int n;
 printf("enter size of array\n");
    scanf("%d",&n);
    int a[n],b[n],i;
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("copied array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
    }
