/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/30 13:50:13 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/05 14:35:42 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//use strlcat to contatonate two srtings 
//use malloc to give memory to the new string
//use strlcpy to copy the string 

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*new;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(total_len + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	return (new);
}

/* int main()
{
	char const *s1 = "Hi ";
	char const *s2 = "SHIyuan";
	char *new; 
	
	new = ft_strjoin(s1, s2);
	printf("%s", new);
	free(new);
} */