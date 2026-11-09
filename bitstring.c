#include <stdio.h>

int main() 
{ 
	int A[5] = {0}, B[5] = {0}; int U[5], I[5], D[5]; int i, n, num;

	printf("Enter the number of elements in Set A: ");
	scanf("%d", &n);

	printf("Enter the elements of Set A (1 to 5):\n");

	for (i = 0; i < n; i++)
	{
	    scanf("%d", &num);

	    if (num >= 1 && num <= 5)
	        A[num - 1] = 1;
	}

	printf("Enter the number of elements in Set B: ");
	scanf("%d", &n);

	printf("Enter the elements of Set B (1 to 5):\n");

	for (i = 0; i < n; i++)
	{
	    scanf("%d", &num);

	    if (num >= 1 && num <= 5)
	        B[num - 1] = 1;
	}

	printf("\nSet A: ");

	for (i = 0; i < 5; i++)
	    printf("%d", A[i]);

	printf("\nSet B: ");

	for (i = 0; i < 5; i++)
	    printf("%d", B[i]);



	for (i = 0; i < 5; i++)
	    U[i] = A[i] || B[i];

	printf("\nUnion: ");

	for (i = 0; i < 5; i++)
	    printf("%d", U[i]);



	for (i = 0; i < 5; i++)
	    I[i] = A[i] && B[i];

	printf("\nIntersection: ");

	for (i = 0; i < 5; i++)
	    printf("%d", I[i]);



	for (i = 0; i < 5; i++)
	    D[i] = A[i] && !B[i];

	printf("\nDifference (A-B): ");

	for (i = 0; i < 5; i++)
	    printf("%d", D[i]);

	printf("\n");

	return 0;


}
