/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/18 17:00:22 by sliang        #+#    #+#                 */
/*   Updated: 2026/03/25 18:30:13 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/* int main()
{
    printf("%d\n", ft_isprint('3'));
	printf("%d\n", ft_isprint(' '));
    printf("%d", ft_isprint(3));
} */