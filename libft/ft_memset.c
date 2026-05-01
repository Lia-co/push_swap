/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/19 18:11:32 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/04 12:57:00 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (n > 0)
	{
		*temp++ = (unsigned char)c;
		n--;
	}
	return (s);
}

/* int	main(void)
{
	unsigned char *set_s;
	char s[] = "Hello";
	
	set_s = ft_memset(s, 97, 5);
	// for (int i = 0; i < 5; i++)
	// 	printf("%c\n", set_s[i]);
	print_bytes(set_s, 5);
	return (0);
} */