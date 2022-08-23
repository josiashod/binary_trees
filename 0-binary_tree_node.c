#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary node
 * @parent: the pointer to the parent node of
 * the node to create
 * @value: the value of the new node
 *
 * Return: a pointer to the new node if nothing failed
 * however return NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
