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

int linear_search(int item)
{
	for (int i = 0; i < N; ++i)
	{
		if(A[i]==item) {
			printf("Element found! on location %d\n", i);
			return 0;
		}
	}
	printf("No element found!\n");
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
				printf("\nEnter element to search: \n");
				scanf("%d", &param);
				linear_search(param);
				break;
			case 3:
				select = -1;
				traverse_array();
				break;
			case 4:
				ch = 'N';
				break;
			default:
				select = -1;
				printf(" 1. Insert Array\n 2. Search\n 3. Traverse\n 4. Exit\n");
				printf("\n Select from above: ");
				scanf("%d", &select);
				break;
		}
	} while(ch=='Y');
	return 0;
}