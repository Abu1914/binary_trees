#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in a tree
 * @tree: The tree to measure the depth
 * Return: The depth of the tree or 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
