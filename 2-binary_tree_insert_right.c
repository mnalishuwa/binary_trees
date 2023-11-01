#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * Description: deletes all nodes in a binary binary tree
 *
 * @tree: binary_tree_t pointer to root node
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
	tree = NULL;
}
