#include<stdio.h>
void main()
{
    int a[100],i,n,j,c;
    printf("Enter the size\n");
scanf("%d",&n);
printf("\nEnter the elements");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    c=1;
    for(j=i+1;j<n;j++)
    {

        if(a[i]==0)
            continue;
        if(a[i]==a[j])
        {
            c++;
            a[j]=0;

        }
    }
    if(c>1)
        printf("\n%d repeated %d times",a[i],c);
}

}
