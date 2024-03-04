#include "binary_trees.h"

/**
 * array_to_bst - function that builds a BST from an array
 * @array: The array
 * @size: The number of elements in the array
 * Return: The root of the BST
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *new;
	size_t a = 0;

	if (size == 0)
		return (NULL);

	new = NULL;

	while (a < size)
	{
		bst_insert(&new, array[a]);
		a++;
	}
	return (new);
}
