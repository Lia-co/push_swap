/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 15:16:03 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/06 16:53:35 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
LOGIC
	declare a new list and node applied with *f
	while loop goes through each node applying f
		- initialize new content
		- initialize new node
		- if malloc f_node fails, delete pointer to content and created nodes
		- add each f_node to the new list
NOTE
	syntax of editing lst and node
	add &new_lst here if I want to edit new_lst
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*f_node;
	void	*content;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		f_node = ft_lstnew(content);
		if (!f_node)
		{
			del(content);
			ft_lstclear(&new_lst, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new_lst, f_node);
		lst = lst->next;
	}
	return (new_lst);
}
