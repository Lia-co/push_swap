/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 11:21:40 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/04 12:52:10 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
LOGIC
	declare a new t_list
NOTE
	how to write test main?
	why no need to typecast (t_list)?
	do I need to initialize content is void here?
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
