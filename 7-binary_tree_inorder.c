#include "binary_trees.h"

/**
 * binary_tree_inorder - travesal binary tree using in-order method
 * @tree: passed params as a pointer to root node
 * @func: passed argument as a function to pint to next node
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
