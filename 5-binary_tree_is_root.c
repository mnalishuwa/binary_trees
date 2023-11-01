#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 * Description: checks if node points to the root
 * of the binary tree
 *
 * @node: pointer to tree node
 *
 * Return: int, 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
