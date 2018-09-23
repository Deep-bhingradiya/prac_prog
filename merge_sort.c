
#include <stdio.h>
#include <stdlib.h>

int merge_sort(int *arr, int len);
int merge(int *arr, int *left, int *right, int len);

int main()
{

	int arr[5] = {4, 2, 9, 1, 7}; 
	int i;	
	int len;

	len = sizeof(arr)/sizeof(arr[0]);

	printf("Org array \n");
	for(i = 0; i < 5; i++)	
	{
		printf("%d ", arr[i]);
	}

	
	merge_sort(arr, len);

	printf("\n Sorted array \n");
	for(i = 0; i < 5; i++)	
	{
		printf("%d ", arr[i]);
	}


	return 0;
}

int merge_sort(int *arr, int len)
{

	int mid;
	int *left;
	int *right;
	int i;	

	if(len < 2)
	{	
		return;
	}
	else
	{
		mid = len/2;

		left 	= (int *)malloc(sizeof(int) * mid);
		right 	= (int *)malloc(sizeof(int) * len - mid);

		for(i = 0; i < mid; i++)
		{
			left[i] = arr[i];
		}

		for(i = mid; i < len; i++)
		{
			right[i - mid] = arr[i];
		}

		merge_sort(left, mid);
		merge_sort(right, len-mid);
		merge(arr, left, right, len);

	}

}

int merge(int *arr, int *left, int *right, int len)
{

	int i = 0;
	int j = 0;
	int k = 0;
	int i_l = len/2;
	int i_r = len - i_l;

	while(i < i_l && j < i_r)
	{
		if(left[i] < right[j])
		{
			arr[k] = left[i];
			i++;		
		}
		else
		{
			arr[k] = right[j];
			j++;		
		}
		k++;
	
	}

	while(i < i_l)
	{
		arr[k] = left[i];
		i++;
		k++;
	}

	while(j < i_r)
	{
		arr[k] = right[j];
		j++;
		k++;
	}


}
