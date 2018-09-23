
#include <stdio.h>


int main()
{
	int temp; 
	int arr[5] = {9, 2, 8, 1, 3};
	int i, j, n = 5;

	printf("Org array \n");
	for(i = 0; i < n; i++)
	{   
	    printf("%d ", arr[i]);
	}

	for(j = 0; j < n - 1; j++)
	{
		for(i = 0; i < n - 1 - j; i++)
		{
			if(arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	
    printf("\nSorted array \n");
	for(i = 0; i < n; i++)
	{   
	    printf("%d ", arr[i]);
	}
	
	return 0;
}

