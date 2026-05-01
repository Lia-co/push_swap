/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 12:03:50 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/04 12:44:36 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
questions 
1. why **lst instead of *lst?
2. why people also adding *lst = new; ? looks like repetitive behaviour
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
