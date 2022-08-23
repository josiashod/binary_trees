#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 * @node: The pointer to the node to check
 *
 * Return: 1 if the node is root otherwise return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
