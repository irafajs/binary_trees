#include "binary_trees.h"

/**
 * binary_tree_levelorder - binary tree to print using level order
 * @tree: passed args pointer to a binary tree
 * @func: passed args as a function pointer to a func
 *
 * Return: NULL if tree is NULL other wise a print of all nodes
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t **queue = NULL;
	size_t front = 0, rear = 0;
	const binary_tree_t *current;

	if (tree == NULL || func == NULL)
		return;
	queue = malloc(sizeof(binary_tree_t *));
	if (queue == NULL)
		return;
	queue[rear++] = (binary_tree_t *)tree;
	while (front < rear)
	{
		current = queue[front++];
		func(current->n);
		if (current->left)
		{
			queue = realloc(queue, (rear + 1) * sizeof(binary_tree_t *));
				if (queue == NULL)
				{
					return;
				}
			queue[rear++] = (binary_tree_t *)current->left;
		}
		if (current->right)
		{
			queue = realloc(queue, (rear + 1) * sizeof(binary_tree_t *));
				if (queue == NULL)
				{
					return;
				}
			queue[rear++] = (binary_tree_t *)current->right;
		}
	}
	free(queue);
}
