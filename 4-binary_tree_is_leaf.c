#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is a leaf
 * Description: check if tree node has no children
 *
 * @node: binary_tree_t pointer
 *
 * Return: int, 1 if leaf or 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
