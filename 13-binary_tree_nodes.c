#include "binary_trees.h"

/**
 * binary_tree_nodes - calculate nodes with atleast one child
 * @tree: passed params as a pointer to the binary tree
 *
 * Return: 0 when no child is available or number child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_node;
	size_t r_node;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		l_node = binary_tree_nodes(tree->left);
		r_node = binary_tree_nodes(tree->right);
		return (l_node + r_node + 1);
	}
	return (0);
}
