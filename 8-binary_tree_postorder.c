#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse the binary tree using post order method
 * @tree: passed params as a pointer to root node
 * @func: passed args as a function pointer to next node
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
