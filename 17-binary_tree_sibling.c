#include "binary_trees.h"

/**
 * binary_tree_sibling - function to find if a node is a sibling
 * @node: passed arg as a pointer to a node to check
 *
 * Return: node to the sibling or NULL if it is not a sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	if (node->parent->right == node)
	{
		return (node->parent->left);
	}
	return (NULL);
}
