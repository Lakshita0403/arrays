
#include<stdio.h>
void main()
{
    int a[100],i,n,j,temp;
    printf("Enter size of array\n");
    scanf("%d",&n);

    printf("Enter no.of elements in array\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("After reversing:");

    for(i=0,j=n-1;i<n/2;i++,j--)
{

       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
}
    for(i=0;i<n;i++)
        printf("\na[%d]=%d",i,a[i]);
        printf("\na[%d]=%d",i,a[i]);
}
