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

int binary_search(int item)
{
	int beg = 0, end = N;
	int mid = (beg+end)/2;

	while(beg<=end) {

		if(item > A[mid]) {
			beg = mid+1;
		}
		else if(item < A[mid]) {
			end = mid-1;
		}
		else {
			printf("element found! on location %d\n", mid);
			return 0;
		}

		mid = (beg+end)/2;
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
				binary_search(param);
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
				printf(" 1. Insert Array\n 2. Binary Search\n 3. Traverse\n 4. Exit\n");
				printf("\n Select from above: ");
				scanf("%d", &select);
				break;
		}
	} while(ch=='Y');
	return 0;
}