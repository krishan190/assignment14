#include<stdio.h>
int max(int[],int);
int max(int b[],int N)
{
    int i,max=0;
    printf("Enter 5 numbers:");
    for(i=0;i<=4;i++)
    {
      scanf("%d",&b[i]);
      if(b[i]>max)
      max=b[i];
    }
    printf("greatest no is = %d",max);
    printf("\n");
    return max;
}
int main()
{
    int a[5];
    max(a,5);
    return 0;
}