/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/20 17:02:33 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/04 12:54:11 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
    The memchr() function scans the initial n bytes of the memory area pointed 
	to by s for the first instance of c.  Both c and the bytes of the memory 
	area pointed to by s are interpreted as unsigned char.

RETURN VALUE
    a pointer to the matching byte or NULL (the character doesn't occur)

LOGIC
	1. set c and s as unsigned char.
	2. scan c within n bytes
	3. return NULL id there is no c
	4. return s from the 1st instance of c
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		chr;
	unsigned const char	*str;
	size_t				i;

	chr = (unsigned char)c;
	str = (unsigned const char *)s;
	i = 0;
	while (str && i < n)
	{
		if ((str[i]) == chr)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}

/* int	main()
{
	const char	s[] = "Hello";
	char		c = 'e';
	char		*str = ft_memchr(s, c, 4);

	print_bytes(str, 4);
} */
