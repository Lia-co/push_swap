/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   compute_disorder.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/01 16:47:06 by sliang        #+#    #+#                 */
/*   Updated: 2026/05/20 18:02:00 by shiyuan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/** 
 * @brief  	calculate disorder metric and return a float
 *
 * @details  This function compares current_node and next_node.
 * 			 If their position are wrong, then mistakes increases.
 * 			 
 * @return 	float--the float number of disorder metric.
 * 			
 */

float compute_disorder(t_list *stack_a)
{
	float	mistakes;
	float	total_pairs;
	t_list	*current_node;
	t_list	*next_node;

	mistakes = 0;
	total_pairs = 0;
	current_node = stack_a;
	while (current_node->next != NULL)
	{
		next_node = current_node->next;
		while (next_node)
		{
			if (next_node->content < current_node->content)//dereferencing both nodes' content
				mistakes++;
			next_node = next_node->next;
			total_pairs++;
		}
		current_node = current_node->next;
	}
	return ((mistakes / total_pairs) * 100);
}
