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

/**
 * binary_tree_height - func t measure the height of our binary tree
 * @tree: passed param as a pointer to root node
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

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
 * binary_tree_is_perfect - function to check if a tree is perfect
 * @tree: passed arg as a pointer to the binary tree to check
 *
 * Return: 0 if tree in not perfect and is null and 1 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_height, r_height, l_nodes, r_nodes;
	size_t t_nodes;

	if (tree == NULL)
	{
		return (0);
	}
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	l_nodes = binary_tree_size(tree->left);
	r_nodes = binary_tree_size(tree->right);
	t_nodes = 1 << l_height;
	if (l_height != r_height)
	{
		return (0);
	}
	if (l_nodes == r_nodes && ((l_nodes + 1) == t_nodes))
	{
		return (1);
	}
	return (0);
}
