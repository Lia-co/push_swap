/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   make_list.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/04 16:01:56 by sliang        #+#    #+#                 */
/*   Updated: 2026/05/04 20:26:43 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/** 
 * @brief  	convert argv entries into integer, allocates integer array stack_a,
 * 		   	and fills it.
 *
 * @details  Makes 1 while loop and it fills the array by parsing each non-flag 
 * 			 entry with `ft_atoi`. Fills integers into stack_a.
 * 			 Returns the `&stack_a` or `stack_a`?
 *
 * @return 	t_list — unsorted stack_a used for later.
 * 			
 */

t_list *make_list(int argc, char *argv[])
{
	int 	i;
	t_list 	*stack_a;
	t_list	*node;

	stack_a = NULL;
	node = NULL;
	//check if there is no argv[1] as input
	if (argc < 2)
	{
		printf("error");
		exit(1);
	}
	//creat the head of stack_a, using ft_atoi to convert char to int
	i = 1;
	if (stack_a == NULL)
	{
		stack_a = ft_lstnew(ft_atoi(argv[i]));
		if (!stack_a)
			return (NULL);
	}

	//add argv[i] one by one to stack_a
	while (i++ < argc-1)
	{
		if (!stack_a)
			return (NULL);
		node= ft_lstnew(ft_atoi(argv[i]));
		// printf("%d", node->content );
		ft_lstadd_back(&stack_a, node);
	}
	//find the last node and make stack_a ends with NULL
	node = ft_lstlast(stack_a);
	node->next = NULL;
	return (stack_a);
}
