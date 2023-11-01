#include "binary_trees.h"

/**
 * binary_tree_height - func t measure the height of our binary tree
 * @tree: passed param as a pointer to root node
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	if (l_height > r_height)
	{
		return (l_height);
	}
	else
	{
		return (r_height);
	}
}
