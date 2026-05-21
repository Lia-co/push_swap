#include "push_swap.h"

void print_bench(int argc, char *argv[], float disorder, t_flag *ptr_flag)
{
	print_disorder(disorder);
	print_strategy(disorder, ptr_flag);
	print_operations(total_ops, ops);
}

void print_disorder(float disorder)
{
	printf("disorder: %f%%", disorder);
}

void  print_strategy(float disorder, t_flag *ptr_flag)
{
	if (disorder < 20.00 || ptr_flag->algorithm = "--simple")
		ft_putstr_fd("[bench] strategy: Simple / O(n^2) ", 2);
	if ((disorder >= 20.00 && disorder < 50.00) || ptr_flag->algorithm = "--medium")
		ft_putstr_fd("[bench] strategy: Medium / O(n√n) ", 2);
	if (disorder >= 50.00 || ptr_flag->algorithm = "--complex")
		ft_putstr_fd("[bench] strategy: Complex / O(n log n) ", 2);

}