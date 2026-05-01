// C program for implementation of Insertion Sort
#include <stdio.h>

//insert sort function
void insert_sort(int arr[], int len_arr)
{
	int	key;//compare with previous int and keep arr[i] value
	int	i;//for first while loop to compare each key
	int	j;//for the second while loop to compare sorted elements

	i = 1;
	while (i < len_arr)
	{
		key = arr[i];
		j = i - 1;
		while (arr[j] > key && j >= 0)
		{
			// arr[j] = arr[i];//why this is wrong?
			// arr[i] = arr[j];//why this is wrong?
			arr[j + 1] = arr[j];
			j--;
		}
		// arr[i] = arr[i - 1];//why this is wrong?
		arr[j + 1] = key;
		i++;
	}
}

//print array function
void	print_arr(int arr[], int len_arr)
{
	int	i;

	i = 0;
	while (i < len_arr)
	{
		printf("%d ", arr[i]);
		i++;
	}
}

//entry point for testing
int main(void)
{
	int arr[] = {7, 6, 5, 4, 3, 2, 1, 0};
	int	len_arr;

	len_arr = sizeof(arr) / sizeof(arr[0]);
	printf("before: ");
	print_arr(arr, len_arr);
	printf("\n");
	insert_sort(arr, len_arr);
	printf("after: ");
	print_arr(arr, len_arr);
	return 0;
}