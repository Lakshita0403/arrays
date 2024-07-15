#include<stdio.h>

void printNumbers(int arr[],int n);

int main()
{
    int arr[] = {1,3,5,7,9,10};
    printNumbers(arr,6);
    return 0;
}
   void printNumbers(int arr[], int n)
    {
        for(int i = 0;i<n;i++)
        {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    }

