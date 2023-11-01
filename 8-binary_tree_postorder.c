#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a tree using post-order traversal
 * Description: goes through a tree using post-order traversal, recursively
 * traverse the current node's left subtree, then traverse the current node's
 * right subtree, then visit the current node
 *
 * @tree: pointer to root of tree
 * @func: pointer to function that receives int and returns void
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
