/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/01 16:47:06 by sliang        #+#    #+#                 */
/*   Updated: 2026/05/03 14:09:26 by shiyuan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
float 	compute_disorder(t_list *stack_a);
void 	printList(t_list *stack_a);

float compute_disorder(t_list *stack_a)
{
	float	mistakes;
	float	total_pairs;
	t_list	*current_list;
	t_list	*next_list;

	mistakes = 0;
	total_pairs = 0;
	current_list = stack_a;
	while (current_list->next != NULL)
	{
		next_list = current_list->next;
		while (next_list->next != NULL)
		{
			total_pairs ++;
			if (*(int *)next_list->content > *(int *)current_list->content)//dereferencing both nodes' content
				mistakes ++;
		}
	}
	return (mistakes / total_pairs);
}

//testing compute disorder function

// Utility function to print the linked list
void printList(t_list *stack_a) 
{
    t_list *temp = stack_a;
    while (temp->next != NULL) 
	{
        printf("%d -> ", *(int *)temp->content);
        temp = temp->next;
    }
    printf("NULL\n");
}

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

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}

int main(void)
{
	t_list	*stack_a;
	int		arr[3] = {35, 51, 3};
	
	stack_a = ft_lstnew((int *)5);
	printf("Linked List:\n");
	ft_lstadd_back(&stack_a, ft_lstnew(&arr[0]));
	printf("Linked List:\n");
	ft_lstadd_back(&stack_a, ft_lstnew(&arr[1]));
	printf("Linked List:\n");
	ft_lstadd_back(&stack_a, ft_lstnew(&arr[2]));
	
/* 	t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
    t_list *node4 = malloc(sizeof(t_list));

    // 2. Assign values (1, 2, 5, 4)
    node1->content = (int *)1;
    node2->content = (int *)2;
    node3->content = (int *)5;
    node4->content = (int *)4;

    // 3. Manually "link" the addresses
    node1->next = node2; // 1 points to 2
    node2->next = node3; // 2 points to 5
    node3->next = node4; // 5 points to 4
    node4->next = NULL;  // End of the list */

	printf("Linked List:\n");
    printList(stack_a);
}