#include "binary_trees.h"

/**
 * binary_tree_delete - delete the binary trree from branch to root
 * @tree: pointer to the binary three
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
