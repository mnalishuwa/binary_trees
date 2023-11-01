#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * Description:  Creates a new node with value passed, then inserts it as
 * the right child of the parent node passed
 *
 * @parent: binary_tree_t pointer to parent node
 * @value: int, data
 *
 * Return: pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = new_node;
		return (new_node);
	}

	new_node->right = parent->right;
	parent->right->parent = new_node;
	parent->right = new_node;
	return (new_node);
}
