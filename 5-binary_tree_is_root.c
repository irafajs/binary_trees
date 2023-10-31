#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is a root node or noet
 * @node: passed param as a node to check
 *
 * Return: 1 if it is a node 0 it it is not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node == NULL || node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
