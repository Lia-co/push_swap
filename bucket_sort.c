/*
THIS ONLY APLLIED TO NON NEGTIVE INTEGERS
LOGIC
	1. create a series of buckets. find the max. 
	2. num in an array of integers
	3. decide wihch number go to which bucket:
		3.1 normalize numbers: normalized = num (max + 1) 
		3.2 bucketno = int(n * normalized)
	4. insert sort applied to each bucket
	5. get a sorted array
*/

#include <stdio.h>

//main bucket sort function
int bucket_sort(int arr[], int len_arr)
{
	int	max;
	int	i;
	int	bucket[max + 1];//why the size of bucket is (max+1)?
	int normalized;
	int bucket_num;
	int	len_bucket;
	int	output[];

	max = max_num(arr, len_arr);
	if (len_arr == 0)
		return (arr);
	//part1: create an empty bucket and initialize it into 0
	i = 0;
	while (i <= max)
	{
		bucket[i] = 0;
		i++;
	}
	//part2: normalize and place into buckets
	i = 0;
	while (i <= max)//loop through each element in array
	{
		normalized = arr[i] / (max + 1);
		bucket_num = len_arr * normalized;//how to convert result into int?
		//append each number into bucket
		bucket[bucket_num]?
	}
	//part3: sort each bucket with insert sort
	len_bucket = 
	while (bucket_num < )
		insert_sort(bucket[bucket_num], len_bucket);
	//part4: combine sorted buckets
	output[] = ft_strcat?//how to append sorted buckets
}

//find the max. number in an array
int max_num(int arr[], int len_arr)
{
	int		i;
	int		max_num;

	i = 1;
	max_num = arr[0];
	while (i < len_arr)
	{
		if (max_num < arr[i])
			max_num = arr[i];
		i++;
	}
	return (max_num);
}

//insert sort function
void insert_sort(int arr[], int len_arr)
{
	int	key;
	int	i;
	int	j;

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
	printf("%d\n", max_num(arr, len_arr));
	printf("before: ");
	print_arr(arr, len_arr);
	printf("\n");
	bucket_sort(arr, len_arr);
	printf("after: ");
	print_arr(arr, len_arr);
	return 0;
}

function(int arr[]) = function(int *arr)

char str[]
char *str