#include<stdio.h>
int sumEvenOdd(int[]);
int sumEvenOdd(int b[])
{
    int i,se=0,so=0;
    printf("Enter 10 numbers :");
    for(i=0;i<=9;i++)
    scanf("%d",&b[i]);
    for(i=0;i<=9;i++)
    {
        if(b[i]%2==0)
        se=se+b[i];
        else
        so=so+b[i];
    }
    printf("\n sum of all even numbers: %d",se);
    printf("\n sum of all odd numbers : %d",so);
    printf("\n");
    return 0;
}
int main()
{
    int num[10];
    sumEvenOdd(num);
    return 0;
}