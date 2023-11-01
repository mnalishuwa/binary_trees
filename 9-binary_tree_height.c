#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * Description: counts the number of edges in the longest path
 * from that node to a leaf.
 *
 * @tree: pointer to the root node
 *
 * Return: void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0;
	size_t rheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		lheight = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		rheight = 1 + binary_tree_height(tree->right);

	if (lheight > rheight)
		return (lheight);
	return (rheight);
}
