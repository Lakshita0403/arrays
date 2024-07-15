#include<stdio.h>
void main()
//{
    /*int arr[5];
    arr[0] = 5;
    arr[2] = -10;
    arr[3/2] = 2;
    arr[3] = arr[0];
    printf("%d%d%d%d",arr[0],arr[1],arr[2],arr[3]);
    return 0;*/
//}

    // TRAVERSE- Print all the array elements one by one

{
    int a[100],i,n;
    printf("Enter size :");
    scanf("%d",&n);
    printf("ENTER the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The given elements are\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}
