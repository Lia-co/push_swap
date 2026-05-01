/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 11:03:29 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/06 16:51:37 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	s_len;
	unsigned int	i;

	if (!s || !f)
		return ;
	s_len = ft_strlen(s);
	i = 0;
	while (i < s_len)
	{
		(*f)(i, s + i);
		i++;
	}
}

/* void	f(unsigned int i, char *c)
{
	printf("f \n");
	*c = *c + 1;
} */

/* int	main()
{
 	char	s[] = "ABC";
 
	printf("%s \n",s);
	ft_striteri(s, f);
	printf("%s",s);
} */