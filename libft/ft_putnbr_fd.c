/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 11:06:49 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/05 14:56:25 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*chr;
	long	num;

	num = n;
	chr = ft_itoa(num);
	if (chr == NULL)
		return ;
	ft_putstr_fd(chr, fd);
	free(chr);
}

/* int main()
{
	int t = 101;
	ft_putnbr_fd(t, 1);
} */