/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/26 13:58:52 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/05 14:34:13 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRITION
	Allocates memory (using malloc(3)) and returns a substring from the ’s’.
	The substring starts at index ’start’ and has a maximum length of ’len’.

RETURN VALUE
	The substring.
	NULL if the allocation fails.

LOGIC
	1. declare varibles for index of substring and a substring
	2. check if s is a valid string
	3. check if the substring is within the s
	4. calculate the length of the substring
	5. malloc the substring, return it
LOGIC
	if start is outside of the string, why return ""
*/

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

/* int main(void)
{
	char const *s = "HelloWorld";
	unsigned int start = 5;
	char *substr = ft_substr(s, start, 6);
	
	printf("%s\n", substr);
	free(substr);
	return (0);
} */