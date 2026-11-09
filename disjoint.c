#include <stdio.h>

int main()
{
    int A[10], n, i, a, b, old;

    printf("Enter number of elements: ");
    scanf("%d", &n);


    for(i = 0; i < n; i++)
    {
        A[i] = i;
    }


    printf("Enter two elements for union: ");
    scanf("%d %d", &a, &b);


    if(A[a] != A[b])
    {
        old = A[b];

        for(i = 0; i < n; i++)
        {
            if(A[i] == old)
            {
                A[i] = A[a];
            }
        }
    }


    printf("Array after Union:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

