#include<stdio.h>
void main()
{
    int a[100],i,n,val,pos;
    printf("Enter size of array\n");
    scanf("%d",&n);

    printf("Enter no.of elements in array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter the location where you want to insert an element\n");
    scanf("%d",pos);

    printf("Enter the value to insert\n");
    scanf("%d",&val);

    //LOGIC
    for(i=n-1;i>=pos-1;i--)
    a[i+1]=a[i];

    a[pos-1]=val;

    printf("Resultant array is as follows\n");

    for(i=0;i<=n;i++)
        printf("%d",a[i]);
}
