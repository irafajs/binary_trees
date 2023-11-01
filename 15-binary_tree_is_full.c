#include "binary_trees.h"

/**
 * binary_tree_is_full - function to check if a tree is full
 * @tree: passed args as a pointer to the binary tree
 *
 * Return: 0 if not full and 1 if it is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (1);
	}
	if ((tree->left) && (tree->right))
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		return (left && right);
	}
	return (0);
}
