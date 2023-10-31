#include "binary_trees.h"

/**
 * binary_tree_node - to create and print out simple binary tree
 * @parent: passed args as a pointer to the root node
 * @value: data value in a given node
 *
 * Return: Null or a pointer to a node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *rootnode;

	rootnode = malloc(sizeof(binary_tree_t));
	if (!rootnode)
	{
		return (NULL);
	}
	rootnode->n = value;
	rootnode->parent = parent;
	rootnode->left = rootnode->right = NULL;
	return (rootnode);
}
