#include <stdio.h>
int secondSmall(int[], int);
int secondSmall(int b[], int N)
{
    int i, j, temp;
    printf("Enter 5 elements :");
    for (i = 0; i <= 4; i++)
        scanf("%d", &b[i]);
    for (i = 0; i <= 4; i++)
    {
        for (j = i + 1; j <= 4; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
        if (i == 1)
        {
            break;
        }
    }
    printf("sorted array is ");
    for (i = 0; i <= 4; i++)
        printf("%d ", b[i]);
    printf("\nsecond smallest element is =%d", b[1]);
    printf("\n");
    return 0;
}
int main()
{
    int a[5];
    secondSmall(a, 5);
    return 0;
}