
#include<stdio.h>
void main()
{
    int a[100],i,n,val,pos;
    printf("Enter size of array\n");
    scanf("%d",&n);

    printf("Enter no.of elements in array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter the location where you want to delete an element\n");
    scanf("%d",pos);

    //logical

    if(pos>=n+1)
        printf("Deletion not possible\n");
     else
     {
         for(i=pos-1;i<n-1;i++)
            a[i]=a[i+1];

         printf("Resultant array:\n");

         for(i=0;i<n-1;i++)
            printf("%d",a[i]);

     }
     return 0;
}
