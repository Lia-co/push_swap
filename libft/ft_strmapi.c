/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 11:02:23 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/04 13:04:56 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	s_len;
	unsigned int	i;

	s_len = ft_strlen(s);
	new = (char *)malloc(s_len + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = 0;
	return (new);
}

/* char	f(unsigned int i, char c)
{
	return (c+1);
} */

/* int	main()
{
	char const	s[] = "ABC";
	char		*new;
	
	printf("%s \n", s);
	new = ft_strmapi(s, f);
	printf("%s", new);
	free(new);
} */