#include<stdio.h>
void main()
{
    int a[5],b[5],c[5];
    int i,j=0,k=0,n=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        for(i=0;i<n;i++)
    {

        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
}
printf("Even array:");
for(i=0;i<j;i++)
    printf("%d",b[i]);
printf("\nOdd array:");
for(i=0;i<k;i++)
    printf("%d",c[i]);

}
