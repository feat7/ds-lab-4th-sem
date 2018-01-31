#include <stdio.h>
#include <string.h>

int N;
char A[100][100];

int insert_array()
{
	printf("Enter number of strings:");
	scanf("%d",&N);

	printf("Enter Strings:");
	for (int i = 0; i < N; ++i)
	{
		scanf("%s", A[i]);
	}
	return 0;
}

int traverse_array()
{
	for(int i=0; i<N; ++i) {
		printf("%s\t", A[i]);
	}
	return 0;
}

int binary_search_2d(char *item)
{
	int beg = 0, end = N;
	int mid = (beg+end)/2;

	while(beg<=end) {
		int str_cmp = strcmp(item, A[mid]);
		if(str_cmp > 0) {
			beg = mid+1;
		}
		else if(str_cmp < 0) {
			end = mid-1;
		}
		else {
			if(str_cmp==0) {
				printf("element found! on location %d\n", mid);
				return 0;
			}
		}

		mid = (beg+end)/2;
	}
	printf("No element found!\n");

	return 0;

}

int main()
{
	char ch = 'Y';
	int select;
	char param[100];
	do {

	printf("\n---------\n");
		switch(select) {
			case 1:
				select = -1;
				insert_array();
				break;
			case 2:
				select = -1;
				printf("\nEnter string to search: \n");
				scanf("%s", param);
				binary_search_2d(param);
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
				printf(" 1. Insert Array\n 2. 2D Binary Search\n 3. Traverse\n 4. Exit\n");
				printf("\n Select from above: ");
				scanf("%d", &select);
				break;
		}
	} while(ch=='Y');
	return 0;
}