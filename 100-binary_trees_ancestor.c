#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * Description: finds the first ancestor from which two nodes are
 * descendent
 *
 * @first: first node
 * @second: second node
 *
 * Return: binary_tree_t *, ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *first_parent, *second_parent;
	int first_parent_depth, second_parent_depth, TRUE = 1;

	if (first == NULL || second == NULL)
		return (NULL);

	first_parent = first->parent;
	second_parent = second->parent;

	if (first == second || (first_parent == NULL && second_parent == NULL))
		return ((binary_tree_t *)first);
	if (first_parent == NULL || second_parent == NULL)
		return ((first_parent == NULL) ? second_parent : first_parent);

	first_parent_depth = binary_tree_depth(first_parent);
	second_parent_depth = binary_tree_depth(second_parent);

	if (first_parent_depth > second_parent_depth)
		first_parent = binary_tree_up_gen(first_parent, second,
						  first_parent_depth - second_parent_depth);
	else if (second_parent_depth > first_parent_depth)
		second_parent = binary_tree_up_gen(second_parent, first,
						   second_parent_depth - first_parent_depth);

	if (first_parent == second || second_parent == first)
		return ((first_parent == second) ?
			(binary_tree_t *)second : (binary_tree_t *)first);

	while (first_parent || second_parent)
	{
		if (first_parent == second_parent)
			return (first_parent);
		first_parent = first_parent->parent;
		second_parent = second_parent->parent;
	}

	return (first_parent);
}

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * Description: counts the number of edges from the root node to
 * the node
 *
 * @tree: pointer to the node to measure the depth
 *
 * Return: size_t, depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}

/**
 * binary_tree_up_gen - returns the nth ancenstor of node
 * Description: takes a node and returns the nth ancestor of
 * the node
 *
 * @node: binary tree node
 * @n: number of generations to move up the tree
 * @relative: second node
 *
 * Return: binary_tree_t *, nth ancestor
 */
binary_tree_t *binary_tree_up_gen(binary_tree_t *node,
				  const binary_tree_t *relative, int n)
{
	binary_tree_t *node_ptr = node;

	if (node == NULL)
		return (NULL);

	if (n <= 0)
		return (node);

	while (node_ptr->parent && n > 0)
	{
		if (node_ptr == relative)
			break;
		node_ptr = node_ptr->parent;
		n--;
	}

	return (node_ptr);
}
