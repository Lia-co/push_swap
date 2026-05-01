/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/18 17:41:40 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/04 17:48:41 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j < len))
		{
			j++;
			if (little[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}

/* int main(void)
{
	const char big[] = "Hello, world";
	const char little[] = "";
	printf("ft_strnstr: %s\n", ft_strnstr(big, little, 13));
	printf("strnstr: %s\n", strnstr(big, little, 13));
	printf("\n");
	printf("ft_strnstr: %s\n", ft_strnstr(big, little, 0));
	printf("strnstr:%s\n", strnstr(big, little, 0));
} */