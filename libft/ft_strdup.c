/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/25 14:59:23 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/06 11:27:34 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The strdup() function returns a pointer to a new string which is a du‐
    plicate of the string s.  Memory for the new string  is  obtained  with
    malloc(3), and can be freed with free(3).
	
RETURN VALUE
	a pointer to the duplicated string.
	NULL: insufficient memory was available with errno set to indicate error

LOGIC
	1. declare 2 variables of a duplicated string and allocate memory size
	2. calculate src string size
	2. memory is enough: duplicate the src string
	3. memory is not enough: return NULL with errno set?
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup_str;
	size_t	size;

	size = ft_strlen(s);
	dup_str = (char *)malloc(size + 1);
	if (!dup_str)
		return (NULL);
	ft_memcpy(dup_str, s, size);
	dup_str[size] = 0;
	return (dup_str);
}

/* int main()
{
	char	*result;
	char	*str = "";

	result = ft_strdup(str);
	printf("%s", result);
	free(result);
} */