/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/30 16:23:02 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/06 11:38:16 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Allocates memory (using malloc(3)) and returns a copy of ’s1’ with 
	characters from ’set’ removed from the beginning and the end.
	
RETURN VALUE
	The trimmed string.
	NULL if the allocation fails.

LOGIC
	1.check if s or set is an empty string
	2.look for the start index position
	3.look for the finish index position
	4.get the length of trimmed string s2
	5.give memory, including the null terminator
	6.copy s1 to s2, give an extra byte for null terminator
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	start;
	size_t	finish;
	char	*s2;

	if (*s1 == '\0')
		return (ft_strdup(""));
	s1_len = ft_strlen(s1);
	start = 0;
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	if (start == ft_strlen(s1))
		return (ft_strdup(""));
	finish = s1_len - 1;
	while (ft_strchr(set, s1[finish]) && finish > start)
		finish--;
	s2_len = (finish - start) + 1;
	s2 = (char *)malloc(s2_len + 1);
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1 + start, s2_len + 1);
	s2[s2_len] = 0;
	return (s2);
}

// int	main()
// {
// 	char const *s1;
// 	char const *set;
// 	char	*s2;

// 	s1 = "   xxx   xxx";
// 	set = " x";
// 	s2 = ft_strtrim(s1, set);
// 	printf("%s\n", s2);
// 	free(s2);
// }
