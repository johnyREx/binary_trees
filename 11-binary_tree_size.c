#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: pointer to the root on a node
 * Return: the size of a binary tree, 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	size_t depth = 0;

	if (tree == NULL)
		return (0);

	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
