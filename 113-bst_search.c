#include "binary_trees.h"
/**
 * bst_search - function that searches for a value in a BST
 * @tree: The root node of the bst tree
 * @value: The value to search for
 * Return: The node containing the value or NULL if nothing found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
	{
		return (NULL);
	}

	if (tree->n == value)
	{
		return ((bst_t *) tree);
	}
	else if (tree->n > value)
	{
		return (bst_search(tree->left, value));
	}
	else
		return (bst_search(tree->right, value));
}
