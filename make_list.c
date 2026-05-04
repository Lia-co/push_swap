#include "push_swap.h"

t_list *make_list(int argc, char *argv[])//* or **for make_list?
{
	int 	i;
	t_list	*link_list;//should I declare stack a and stack b already?
	t_list	*node;

	i = 1;
	if (argc < 2)
		return ("error");
	//use atoi to convert *char to *int?
	link_list = ft_lstnew(ft_atoi(argv[i]));
	while (i < argc)
	{
		i++;
		ft_lstadd_back(&link_list, ft_atoi(argv[i]));
	}
	return (link_list);
}

//test print arguments
/* int main(int argc, char *argv[])
{
	int	i;

	i = 0;
	printf("%d arguments\n", argc);

	while (i < argc)
	{
		printf("argv[%d]%s\n", i, argv[i]);
		i++;
	}
	return (0);
} */

//test make_list function
int main(int argc, char *argv[])
{
	t_list *stack_a;

	stack_a = make_list(argc, argv);

	while (stack_a != NULL)
	{
		printf("%d", (int)stack_a->content);
		stack_a = stack_a->next;
	}
}