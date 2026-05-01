/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/18 16:30:49 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/02 19:10:01 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/* int main(void)
{
	printf("%d\n", ft_isalnum('a'));
    printf("%d\n", ft_isalnum('0'));
	printf("%d", ft_isalnum(0));	
} */