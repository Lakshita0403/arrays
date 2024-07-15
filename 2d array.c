#include<stdio.h>
int main()
{
   int marks[2][4]={{45, 56,23,45},
                    {3,7,8,9}};
     for(int i=0;i<2;i++)
     {
         for(int j=0;j<4;j++)
         {
//printf("the value of %d,%d element of the array is %d\n",i,j,marks[i][j]);
printf("%d",marks[i][j]);
}
printf("\n");

}
}
