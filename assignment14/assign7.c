#include<stdio.h>
int secondLarge(int [],int);
int secondLarge(int b[],int N)
{
   int i,j ,temp;
   printf("Enter 5 elements :");
   for(i=0;i<=4;i++)
   scanf("%d",&b[i]);
   for(i=0;i<=4;i++)
   {
       for(j=i+1;j<=4;j++)
       {
           if(b[i]<b[j])
           {
               temp=b[i];
               b[i]=b[j];
               b[j]=temp;
           }
       }
       if(i==1)
       {
           break;
       }
   }
//    printf("sort array is :");
//    for(i=0;i<=4;i++)
//    printf(" %d ",b[i]);
   printf("second largest element is =%d\n",b[1]);
   printf("\n");
   return 0;

}
int main()
{
    int a[5];
    secondLarge(a,5);
    return 0;
}