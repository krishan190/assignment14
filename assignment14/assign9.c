#include <stdio.h>
int main()
{
    int a[20], i, n;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nentered elements of array is: ");
    for (i = 0; i < n; i++)
        printf(" %d ", a[i]);
    printf("\nReverse order of array is:");
    for (i = n - 1; i >= 0; i--)
        printf(" %d ", a[i]);
    printf("\n");
}