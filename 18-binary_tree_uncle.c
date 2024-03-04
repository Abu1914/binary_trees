#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: The node to find the sibling of
 * Return: The sibling or NULL if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL && node->parent->right == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: The node to find the uncle of
 * Return: The uncle of the node or NULL is no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	uncle = binary_tree_sibling(node->parent);

	return (uncle);
}
