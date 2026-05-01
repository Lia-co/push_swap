/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 12:10:57 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/04 12:52:44 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
NOTE
	why people declare another variable for node to move and count?
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lstsize;

	lstsize = 0;
	while (lst != NULL)
	{
		lstsize++;
		lst = lst->next;
	}
	return (lstsize);
}
