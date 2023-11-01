#include "binary_trees.h"

/**
 * binary_tree_size - calculate the size of a binary tree
 * @tree: passed arguments as a binary tree
 *
 * Return: size of the tree or 0 if there is no tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size;
	size_t r_size;

	if (tree == NULL)
	{
		return (0);
	}
	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);
	return (l_size + 1 + r_size);
}
