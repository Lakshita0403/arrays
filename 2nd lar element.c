#include<stdio.h>
#include<limits.h>
void main()
{
    int a[100],i,n,l1,l2;
    printf("Enter the size\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l1=INT_MIN;
    l2=INT_MIN;
    for(i=0;i<n;i++)
    {
   if(a[i]>l1)
   {

        l2=l1;
        l1=a[i];

   }

    else if(a[i]>l2&&a[i]<l1)
    {
        l2=a[i];
    }
    }
    printf("\nFirst largest=%d",l1);
    printf("\nsecond largest=%d",l2);


}
