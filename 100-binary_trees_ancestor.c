#include "binary_trees.h"

/**
 * binary_trees_ancestor - function to find lowest ancestorn
 * @first: passed arg as a pointer to the first node
 * @second: passed arg as a pointer to the second node
 *
 * Return: Null if not ancestor or a pointer to the parent
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}
	if (first->parent)
	{
		return (binary_trees_ancestor(first->parent, second));
	}
	else if (second->parent)
	{
		return (binary_trees_ancestor(first, second->parent));
	}
	return (NULL);
}
