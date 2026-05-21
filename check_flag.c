#include "push_swap.h"

/*
check if
	-arguments contain valid flags
	-choose force algorithms
	-choose bench mode
*/
void check_flag(unsigned int argc, char *argv[], t_flag *flag)
{
	unsigned int	i;			

	i = 1;
	if (argc == 1)
		return ;
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == '-')
		{
			if (ft_strncmp(argv[i], "--simple", 9) == 0)
				flag->algorithm = "--simple";
			else if (ft_strncmp(argv[i], "--medium", 9) == 0)
				flag->algorithm = "--medium";
			else if (ft_strncmp(argv[i], "--complex", 10) == 0)
				flag->algorithm = "--complex";
			else if (ft_strncmp(argv[i], "--bench", 8) == 0 && flag->bench == 0)
				flag->bench = "--bench";
			else
				ft_putstr_fd("Error", 1);
			flag->flag_num++;
		}
		if (flag->flag_num == 3)
			ft_putstr_fd("Error", 1);
		i++;
	}
}
