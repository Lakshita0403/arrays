#include<stdio.h>
void main()
{
    int a[100],i,n;
    printf("Enter size of array\n");
    scanf("%d",&n);

    printf("Enter no.of elements in array\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("The reverse order of array is\n");
    for(i=n-1;i>=0;i--)
        printf("%d\n",a[i]);
}
