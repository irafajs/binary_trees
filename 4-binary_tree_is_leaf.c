#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf or not
 * @node: pointer to a node to be cjhecked
 *
 * Return: 1 if true on 0 if is not true
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
