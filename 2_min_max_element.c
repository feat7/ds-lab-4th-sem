#include <stdio.h>
int A[100], N;

int insert_array()
{
	printf("Enter number of elements:");
	scanf("%d",&N);

	printf("Enter elements with spaces:");
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &A[i]);
	}
	return 0;
}

int traverse_array()
{
	for(int i=0; i<N; ++i) {
		printf("%d\t", A[i]);
	}
	return 0;
}

int min_search()
{
	int min = A[0];
	for (int i = 0; i < N; ++i)
	{
		if(min > A[i]) min = A[i];
	}
	printf("Smallest element is %d\n", min);
	return 0;
}

int max_search()
{
	int max = A[0];
	for (int i = 0; i < N; ++i)
	{
		if(max < A[i]) max = A[i];
	}
	printf("Largest element is %d\n", max);
	return 0;
}

int main()
{
	char ch = 'Y';
	int select, param;
	do {

	printf("\n---------\n");
		switch(select) {
			case 1:
				select = -1;
				insert_array();
				break;
			case 2:
				select = -1;
				printf("\nSmallest element: \n");
				min_search();
				break;
			case 3:
				select = -1;
				printf("\nLargest element: \n");
				max_search();
				break;
			case 4:
				ch = 'N';
				break;
			default:
				select = -1;
				printf(" 1. Insert Array\n 2. Smallest\n 3. Largest\n 4. Exit\n");
				printf("\n Select from above: ");
				scanf("%d", &select);
				break;
		}
	} while(ch=='Y');
	return 0;
}