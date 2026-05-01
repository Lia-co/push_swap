/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/23 16:33:50 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/04 17:16:32 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION	
	The strrchr() function returns a pointer to the last occurrence of  the
    character c in the string s.
RETURN VALUE
	The strrchr() return a pointer to the matched character or NULL (not found)
	The terminating null byte is considered part of the string, so that if  c  
	is specified  as '\0', these functions return a pointer to the terminator.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/* int	main()
{
	const char 	s[] = "Hello";
	char		c = ' ';
	char		*rc = ft_strrchr(s, c);
	
	printf("%s", rc);
} */