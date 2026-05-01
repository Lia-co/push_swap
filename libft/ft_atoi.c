/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/23 17:25:24 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/04 12:36:02 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
DESRIPTION
	The atoi() function converts the initial portion of the string pointed to
	by nptr to int. Basically, it converts ASCII string to integer.
RETURN VALUE
	The converted value or 0 on error
LOGIC
	1. check if there are white spaces
	2. check if the number of '-' is odd or even, which determines the integer
	would be negative or positive
	3. convert string including digits into an integer
*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

/* int main(void)
{
	const char *s = "  --123nl3dh";
	printf("%d", ft_atoi(s));
} */