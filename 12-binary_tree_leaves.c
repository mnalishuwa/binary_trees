#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * Description: counts the number of nodes with no children
 *
 * @tree: pointer to root of the tree
 *
 * Return: size_t, number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
