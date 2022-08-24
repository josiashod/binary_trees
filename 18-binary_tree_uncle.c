#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: the pointer to the node to find the uncle
 *
 * Return: the pointer to the uncle if its exists otherwise
 * NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
	return (NULL);
}
