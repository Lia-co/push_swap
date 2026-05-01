/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/18 17:05:08 by sliang        #+#    #+#                 */
/*   Updated: 2026/03/26 15:42:06 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* int main(void)
{
	printf("%zu\n", ft_strlen("Hello"));
	printf("%zu\n", ft_strlen("Hello "));
	printf("%zu", ft_strlen("Hello!!"));
} */