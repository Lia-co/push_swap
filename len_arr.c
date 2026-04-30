#include <stdio.h>

int main()
{
	int arr[] = {1, 2, 3};
	int	len_arr;

	len_arr = sizeof(arr)/sizeof(arr[0]);
	printf("%d", len_arr);
	return (0);
}