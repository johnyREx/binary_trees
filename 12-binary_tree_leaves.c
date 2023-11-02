#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - count the number of the leaves in a tree
 * @tree: Pointer to the root node of the tree to count leaves
 * Return: Number of leaves in the tree, 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size_t left_leaves = binary_tree_leaves(tree->left);
	size_t right_leaves = binary_tree_leaves(tree->right);

	return (count_leaves);
}
