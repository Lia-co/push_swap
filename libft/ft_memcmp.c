/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/20 17:25:55 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/04 12:54:30 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
    compares n bytes (as unsigned char) of the memory areas s1 and s2.

RETURN VALUE
    The memcmp() function returns an integer less than, equal to, or greater 
	than zero if the first n bytes of s1 is found, respectively, to be less 
	than, to match, or be greater than the first n bytes of s2.

    For a nonzero return value, the sign is determined by the sign of the 
	difference between the first pair of bytes (interpreted as unsigned char)
	that differ in s1 and s2.

    If n is zero, the return value is zero.
	
LOGIC
	1. typecasting s1 and s2.
	2. return NULL when n = 0.
	3. compare s1 and s2 character by character at most n bytes
	4. return the difference when it first time occures
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;

	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	if (n == 0)
		return (0);
	while (n-- > 0 && (str1 || str2))
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

/* int	main(void)
{
	unsigned const char str1[5] = "abcd";
	unsigned const char str2[5] = "abce";

	printf("%d", ft_memcmp(str1, str2, 1));
} */