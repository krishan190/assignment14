#include <stdio.h>
int min(int[], int);
int min(int b[], int N)
{
    int i, min;
    printf("Enter 6 number :");
    for (i = 0; i <= 5; i++)
        scanf("%d", &b[i]);
    for(i=1;i<=5;i++)
    {
        min = b[0];
        if (b[i] < min)
            min = b[i];
    }
    printf("smallest number is =%d", min);
    printf("\n");
    return min;
}
int main()
{
    int a[6];
    min(a, 6);
    return 0;
}