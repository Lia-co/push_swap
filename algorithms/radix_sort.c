/*
LOGIC
	part1: get the max digit
	part2: counting sort for each digit 
		Store count of occurrences in count[]
		change count[i] which contains actual position of this digit in output[]
		build up output[]
		copy output[] to arr[]
*/

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

/*--------------utils-----------------*/
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