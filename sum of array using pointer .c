#include<stdio.h>
int main()
{
    int n;
    printf("enter array elements \n");
    int a[n],i,*p,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=&a[0];
    for(i=0;i<n;i++)
    {
        sum=sum+*p;
    }
    printf("sum of array elements using pointer is%d\n",sum);
}
