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
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	if (l_height > r_height)
	{
		return (l_height + 1);
	}
	else
	{
		return (r_height + 1);
	}
}
/**
 * binary_tree_balance - determine if a binary tree is balanced)
 * @tree: passed argument as a pointer to the binary tree
 *
 * Return: 0 if tree is null or if tree is balanced an int is returned
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height;
	int r_height;

	if (tree == NULL)
	{
		return (0);
	}
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	return (l_height - r_height);
}
