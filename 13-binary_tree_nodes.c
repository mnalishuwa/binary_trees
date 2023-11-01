#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * Description: counts the number of internal nodes
 *
 * @tree: root of binary tree
 *
 * Return: size_t, internal nodes total
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t internal_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		internal_nodes++;

	return (internal_nodes + binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
}
