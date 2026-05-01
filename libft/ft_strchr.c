/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/23 16:15:58 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/04 13:02:07 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
    The  strchr() function returns a pointer to the first occurrence of the
    character c in the string s.

RETURN VALUE
    The strchr() return a pointer to the matched character or NULL. (not found).
	The terminating null byte is considered part of the string, so that if  c  
	is  specified  as '\0', these functions return a pointer to the terminator.

LOGIC
	1. why typecasting int c as unsigned char or reverse?
	2. c == '\0': return terminator
	3. c != '\0': look c inside of string
	4. return the pointer or NULL
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	chr;

	i = 0;
	chr = c;
	if (chr == '\0')
	{
		i = ft_strlen(s);
		return ((char *)s + i);
	}
	while (s[i])
	{
		if (s[i] == chr)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char *s = "Hello";
// 	char c = '0';

// 	printf("%s", ft_strchr(s, c));
// }