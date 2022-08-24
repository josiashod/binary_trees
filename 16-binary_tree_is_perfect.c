#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree
 * @tree: the pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL, otherwise return the value found
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
		return (0);

	l_height = tree->left ? 1 + tree_height(tree->left) : 0;
	r_height = tree->right ? 1 + tree_height(tree->right) : 0;
	return (max(l_height, r_height));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: The pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t t_height, l_height, r_height;

	if (!tree)
		return (0);
	t_height = tree_height(tree);
	l_height = tree_height(tree->left);
	r_height = tree_height(tree->right);
	if ((t_height - 1) == l_height && (t_height - 1) == r_height)
		return (1);
	return (0);
}
