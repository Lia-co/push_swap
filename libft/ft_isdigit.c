/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/17 14:32:53 by sliang        #+#    #+#                 */
/*   Updated: 2026/03/25 18:29:43 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/* int main()
{
    printf("%d\n", ft_isdigit('3'));
    printf("%d", ft_isdigit(3));
} */