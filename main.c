/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/04 13:37:21 by sliang        #+#    #+#                 */
/*   Updated: 2026/05/05 10:24:27 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// /*------------test make_list function------------*/
/* int main(int argc, char **argv)
{
	t_list *stack_a;

	stack_a = make_list(argc, argv);

	while (stack_a)
	{
		printf("%d\n", stack_a->content);
		stack_a = stack_a->next;
	}
} */

/*------------testing compute disorder function------------*/

// Utility function to print the linked list
void printList(t_list *stack_a) 
{
    t_list *temp = stack_a;
	
    while (temp) 
	{
        printf("%d ", temp->content);
        temp = temp->next;
    }
}

int main(int argc, char *argv[])
{
	t_list 	*stack_a;
	float	dis_metric;

	stack_a = make_list(argc, argv);
	printf("print stack_a: ");
	printList(stack_a);
	printf("\n");
	dis_metric = compute_disorder(stack_a);
	printf("print dis_metric: %f%%\n", dis_metric);
}
