#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height 
 * @tree: Pointer to the node
 * Return: Height of the tree, 0 if tree is nULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	 left_height = binary_tree_height(tree->left);
	 right_height = binary_tree_height(tree->right);

	 return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Checks is binary tree is perfect
 * @tree: Pointer to the root node
 * Return: 1 if tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, expected_size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);


	expected_size = (1 << height) - 1;

	return (size == expected_size);
}
