#ifndef SORT_H
#define SORT_H

/* Standard Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/* Structure Used */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;



/* Function Prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
int proof_read_array(int *, int);
void bubble_sort(int *array, size_t size);
void swap_node(listint_t *post1, listint_t *post2);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sorter(int *array, int start, int end, int size);
int lomuto_partition(int *array, int start, int end, int size);
void shell_sort(int *array, size_t size);
void swap_arr(int *arr_idx1, int *arr_idx2);

#endif /* ifndef SORT_H */
