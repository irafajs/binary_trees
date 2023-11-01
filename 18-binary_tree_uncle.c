#include "binary_trees.h"

/**
 * binary_tree_uncle - function to find the uncle node of a given node
 * @node: passed arg as a pointer to the given node to check the uncle
 *
 * Return: NULL if not uncle available else a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}
	if (node->parent == node->parent->parent->right)
	{
		return (node->parent->parent->left);
	}
	return (NULL);
}
