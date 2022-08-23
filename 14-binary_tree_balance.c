#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree
 * @tree: the pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL, otherwise return the value found
 */
int tree_height(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (!tree)
		return (0);

	l_height = tree->left ? 1 + tree_height(tree->left) : -1;
	r_height = tree->right ? 1 + tree_height(tree->right) : -1;
	return (max(l_height, r_height));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: The pointer to the root node of the tree to measure
 * the balance factor
 *
 * Return: 0 if tree is NULL, otherwise return the value found
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree_height(tree->left) + tree_height(tree->right));
}
