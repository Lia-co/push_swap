/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/19 18:16:41 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/04 14:28:10 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Copies n bytes from memory area src to memory area dest.
	Not overlap memory areas

RETURN VALUE
	a pointer to dest

LOGIC
1. if dest and src are null, return (null);
2. if n = 0 or dest and src are the same, return dest
3. if dest and src are not the same, copy src to dest
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d_ptr;
	const char	*s_ptr;

	d_ptr = (char *)dest;
	s_ptr = (const char *)src;
	if (!dest || !src)
		return (dest);
	else if (n == 0 || dest == src)
		return (dest);
	while (n > 0)
	{
		*d_ptr = *s_ptr;
		s_ptr++;
		d_ptr++;
		n--;
	}
	return (dest);
}

/* int	main(void)
{
	unsigned char dest[] = "Hello";
	unsigned const char src[] = "HELLO";
	unsigned char *test;

	test = ft_memcpy(dest, src, 5);
	printf("%s", test);
} */