#include<stdio.h>
int main()
{
    int a[10],b[10], i,n;
       printf("Enter the size of array:");
       scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("Entered elements of array:");
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);
    printf("\ncopy elements of array:");
    for(i=0;i<n;i++)
    b[i]=a[i];
    for(i=0;i<n;i++)
    printf(" %d ",b[i]);
    printf("\n");
    
}