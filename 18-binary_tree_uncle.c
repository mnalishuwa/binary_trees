#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * Description: finds the node parent's sibling
 * if it exists
 *
 * @node: node to find the uncle of
 *
 * Return: binary_tree_t *, node parent's sibling or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - finds the sibling of a node
 * Description: finds the node share the same parent
 * with the argument node if it exists
 *
 * @node: node to find the sibling of
 *
 * Return: binary_tree_t *, sibling to node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return ((node->parent->left == node) ?
		node->parent->right : node->parent->left);
}
