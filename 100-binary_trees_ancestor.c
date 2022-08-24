#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: the pointer to the first node
 * @second: the pointer to the second node
 *
 * Return: NULL if no ancestor was found, otherwise
 * return the pointer to the found ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if (first && second)
	{
		if (first->parent && second->parent)
		{
			if (first->parent == second->parent)
				return (first->parent);
			else if (first == second->parent)
				return (second->parent);
			else if (second == first->parent)
				return (first->parent);
			else if (first->parent->parent == second->parent)
				return (second->parent);
			else if (first->parent == second->parent->parent)
				return (first->parent);
			return (binary_trees_ancestor(first->parent,
						      second->parent));
		}
	}
	return (NULL);
}
