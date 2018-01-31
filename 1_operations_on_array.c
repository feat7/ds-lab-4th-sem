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

int delete_element(int location)
{
	for (int i = location; i < N-1; ++i)
	{
		A[i] = A[i+1];
	}
	N--;
	return 0;
}

int traverse_array()
{
	for(int i=0; i<N; ++i) {
		printf("%d\t", A[i]);
	}
	printf("\n");
	return 0;
}

int insert_item(int location, int item)
{
	for (int i = location; i < N+1; ++i)
	{
		A[i+1] = A[i];
	}
	A[location] = item;
	N++;
}

int main()
{
	int select,param, loc;
	char ch = 'Y';

	
	do {
		printf("\n-----------\n");
		switch(select) {
			case 1:
				select = -1;
				printf("\n Enter element to add (location element): ");
				scanf("%d %d", &loc, &param);
				insert_item(loc, param);
				break;
			case 2:
				select = -1;
				printf("\n Enter element location to delete: ");
				scanf("%d", &param);
				delete_element(param);
				break;
			case 3:
				select = -1;
				traverse_array();
				break;
			case 4:
				select = -1;
				insert_array();
				break;
			case 5:
				ch = 'N';
				break;
			default:
				select = -1;
				printf(" 1. Insert Item\n 2. Delete\n 3. Traverse\n 4. Insert/Replace Array\n 5. Exit\n");
				printf("\n Select from above: ");
				scanf("%d", &select);
				break;
		}	
	} while (ch == 'Y');
	
	return 0;
}