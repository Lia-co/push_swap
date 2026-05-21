#include "push_swap.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putstr_fd(char *s, int fd);

/*
check if
	-arguments contain valid flags
	-choose force algorithms
	-choose bench mode
*/
void check_flag(int argc, char *argv[], t_flag *flag)
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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	struct s_flag flag;
	t_flag *ptr_flag = &flag;

	//initialize struct s_flag
	ptr_flag->flag_num = 0;
	ptr_flag->algorithm = "--adaptive";
	ptr_flag->bench = 0;
	check_flag(argc, argv, ptr_flag);
}