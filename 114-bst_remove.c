#include "binary_trees.h"

/**
 * bst_remove_help - function that helps in the removal of a node
 * from a BST
 * @root: The root node of the tree to remove from
 * Return: The minimum node
 */
bst_t *bst_remove_help(bst_t *root)
{
	if (root == NULL)
	{
		return (NULL);
	}

	if (root->left != NULL)
	{
		return (bst_remove_help(root->left));
	}
	else
		return (root);
}
