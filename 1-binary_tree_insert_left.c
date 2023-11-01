#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * Description:  Creates a new node with value passed, then inserts it as
 * the left child of the parent node passed
 *
 * @parent: binary_tree_t pointer to parent node
 * @value: int, data
 *
 * Return: pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = new_node;
		return (new_node);
	}

	new_node->left = parent->left;
	parent->left->parent = new_node;
	parent->left = new_node;
	return (new_node);
}
