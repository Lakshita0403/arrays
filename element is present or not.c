#include<stdio.h>
void main()
{
    int n,el,s=0;
     printf("enter size of array\n");
    scanf("%d",&n);
    int a[n],i;
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to be searched\n");
    scanf("%d",&el);
    for(i=0;i<n;i++)
    {

        if(el==a[i])
        {
            s=1;
            break;
        }
    }
    if(s==1)
        printf("element is present ");
    else
        printf("element is not present");
}
