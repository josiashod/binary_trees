#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: The pointer to the node to measure the depth
 *
 * Return: 0 if tree is NULL, otherwise return the value found
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}
