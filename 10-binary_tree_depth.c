#include "binary_trees.h"

/**
 * binary_tree_depth - calculate depth of a given node in a binary tree
 * @tree: passed arg as a binary tree to check
 *
 * Return: 0 if tree is NULL or depth calculate
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
