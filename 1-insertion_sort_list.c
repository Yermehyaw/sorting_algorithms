#include "sort.h"

/**
 * insertion_sort_list - Sorts a linoed list of data via the insertion sort
 * algorithm
 * @list: A non-empty linked list
 *
 * Description: Rhe insertion sort algorithm works by a gradual build up of
 * sorted data(insertion packet), starting at the beginning of the
 * data structure, finding the right sorted position of every iteratively added
 * value in the growing insertion packet.
 * For a linked list of data the method used here to implent this algorithm
 * consists of four pointers. 2 forward moving insertors,  to add new nodes to
 * the insertion packet and 2 backwards moving checkers to find the right
 * sorted position for the inserted node.
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp1, *temp2, *temp3, *temp4;

	/* list is empty or less than 2 in size */
	if (*list == NULL || (*list)->next == NULL)
		return;
	/* Backwards moving checkers */
	temp1 = *list;
	temp2 = temp1->next;
	/* Forward moving insertors */
	temp3 = temp1;
	temp4 = temp2; /* Both start at the beginning of the list */
	while (temp4)
	{
		if (temp3->n > temp4->n)
			swap_node(temp3, temp4, *list);
		while (temp1 && temp1->prev)
		{
			if (temp1->n > temp2->n)
				swap_node(temp1, temp2, *list);
			temp2 = temp1; /*move checkers backwards*/
			temp1 = temp1->prev;
		}
		temp3 = temp4; /* move insertors forward */
		temp4 = temp4->next;
	}

}



/**
 * swap_node - swaps the positions of two nodes and prints the linked list
 * @post1: position 1
 * @post2: position 2
 * @list: The linked list
 *
 * Visualization Aid: post1Node_first<---post2Node_second----
 */

void swap_node(listint_t *post1, listint_t *post2, listint_t *list)
{
	listint_t *swap;

	swap = post2; /* temp store mem address of the second node */
	post2->next = post1; /* let its next be first ones mem address*/
	post2->prev = post1->prev; /**
				    *lets its prev be what the first was
				    * initially pionting to
				    */
	post1->prev = swap;/**
			    *then the first prev be the seconds original mem
			    *address
			    */
	if (swap->next != NULL)
		swap->next->prev = post1;
	post1->next = swap->next; /**
				   *lastly, its next will be what the second
				   *was also originally pointing to*/
	print_list(list);
}
