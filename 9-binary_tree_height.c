#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: the pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL, otherwise return the value found
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
		return (0);

	l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return max(l_height, r_height);
}
