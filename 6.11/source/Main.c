#include <stdio.h>

#define MAX 10

int main(void)

{

	int a[MAX] = { 1, 2, 3, 4, 5, 10, 9, 8, 7, 6 };

	unsigned int i;

	unsigned int pass;

	int hold;

	int swap;

	puts("Data items in original order");

	for (i = 0; i < MAX; i++)

	{

		printf("%4d", a[i]);

	}

	printf("\n\n");

	for (pass = 1; pass < MAX; pass++)

	{

		swap = 0;

		for (i = 0; i < MAX - pass; i++)

		{

			if (a[i] > a[i + 1])

			{

				swap = 1;

				hold = a[i];

				a[i] = a[i + 1];

				a[i + 1] = hold;

			}

		}

		printf("After Pass %d: ", pass);

		for (i = 0; i <= MAX - pass; i++)

		{

			printf(" %d", a[i]);

		}

		printf("\n");

		if (!swap)

		{

			break;

		}

	}

	puts("\nData items in ascending order");

	for (i = 0; i < 10; i++)

	{

		printf("%4d", a[i]);

	}

	puts("");

}