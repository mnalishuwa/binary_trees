#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * Description: A perfect binary tree has all internal nodes
 * with 2 children and all leaves are at same level, therefore
 * this is a full binary tree with a balance factor of 0 on all
 * nodes
 *
 * @tree: pointer to binary tree
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) && (binary_tree_balance(tree) == 0 &&
					  binary_tree_balance(tree->left) == 0 &&
					  binary_tree_balance(tree->right) == 0))
		return (1);

	return (0);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * Description: checks if every node in the tree has 0 or
 * two children
 *
 * @tree: pointer to tree
 *
 * Return: int, 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * Description: measures the balance factor of a binary tree
 *
 * @tree: pointer to root of tree
 *
 * Return: int, balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

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
	size_t lheight = 1;
	size_t rheight = 1;

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
