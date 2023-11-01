#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * Description: counts the number of edges from the root node to
 * the node
 *
 * @tree: pointer to the node to measure the depth
 *
 * Return: size_t, depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
