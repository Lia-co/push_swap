/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 12:41:23 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/04 19:53:51 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Takes a node as parameter and frees its content using the function ’del’. 
	Free the node itself but does NOT free the next node.
QUESTION
	the syntax of passing node when call the pointer of the function?
	how to reference which node
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	if (del)
		(*del)(lst->content);
	free(lst);
}
