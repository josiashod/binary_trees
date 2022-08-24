#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: the pointer to the node to find the sibling
 *
 * Return: the pointer to the sibling if its exists otherwise
 * NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left != node)
		return (node->parent->left);
	else
		return (node->parent->right);
	return (NULL);
}
