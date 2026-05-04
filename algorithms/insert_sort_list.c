#include <stdio.h>
#include <stdlib.h>

struct Node {
	int 		data;
	struct Node	*next;
};

struct Node *InsertionSort(struct Node *list) 
{
	//declare key node and sorted node
	struct Node *key; 
  	struct Node *sorted_list;
  	if (list == 0 || list->next == 0) 
    	return list;
	sorted_list = list;//make the head of sorted list = list, including the firse node
	sorted_list->next = 0;//make sorted list end with NULL
	key = list->next;//make the second node as the key
	while (key != 0)//go into the loop of key
	{
		struct Node *ptr;//what is this ptr for?
		if (sorted_list->data > key->data)//compare the data of sorted_list and key, 
		//if mistake happens, exchange two values
		{
			struct Node *tmp;//temp to keep key's address?
			tmp = key;
			key = key->next;//why key move the next node?
			tmp->next = sorted_list;//why assign sorted_list to tem's next node? 
			sorted_list = tmp;//now assign sorted_list's to key
			continue;
		}
		ptr = sorted_list;
		while (ptr->next != 0)
		{
			if (ptr->next->data > key->data)
				break;
			ptr = ptr->next;
		}

		if (ptr->next != 0)
		{
			struct Node *tmp;
			tmp = key;
			key = key->next;
			tmp->next = ptr->next;
			ptr->next = tmp;
			continue;
		} 
		else
		{
			ptr->next = key;
			key = key->next;
			ptr->next->next = 0;
			continue;
		}
	}
	return sorted_list;
}