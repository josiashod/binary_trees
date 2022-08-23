#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: the pointer to the node to insert the left-child
 * @value: the value to store in the new node
 *
 * Return: NULL on failure or if parent is NULL
 * otherwise return a pointer to the created node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
	}
	else
		parent->left = node;

	return (node);
}
