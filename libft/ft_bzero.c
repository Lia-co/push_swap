/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/18 17:13:43 by sliang        #+#    #+#                 */
/*   Updated: 2026/03/25 18:25:35 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/* int main(void)
{
	char s[] = "abcd";

	printf("%s\n", s);
	ft_bzero(s, 5);
	for (int i = 0; i < 4; i++)
		printf("%d\n", s[i]);
	return (0);
} */