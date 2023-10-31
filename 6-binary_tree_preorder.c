#include "binary_trees.h"

/**
 * binary_tree_preorder - function to travesal binary tree using pre-order
 * @tree: passed arg as a pointer to binary tree
 * @func: function to point to next node
 *
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
