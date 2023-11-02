#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: pointer to the root on a node
 * Return: the size of a binary tree, 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	size_t i = 1;

	if (!tree)
		return (0);

	i += binary_tree_size(tree->left);
	i += binary_tree_size(tree->right);

	return (i);
}
