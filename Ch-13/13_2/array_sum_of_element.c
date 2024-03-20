#include <stdio.h>

main()
{
    int n, i, sum = 0, avg;

    printf("Enter array size: ");
    scanf("%d", &n); // 8

    int a[n]; // a[8]

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]= ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
        sum = sum + a[i];

    avg = sum / n;
    system("cls");
    printf("AVG of all element: %d\n", avg);
}