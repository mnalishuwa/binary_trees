#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * Description: counts the number of nodes in the tree
 *
 * @tree: pointer to root node of tree
 *
 * Return: size_t, total number of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
