#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree, 0 if tree is NULL.
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
 * binary_tree_balance - Measure the balance factor
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: Balance factor of the tree, 0 if tree is null
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		height_left = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		height_right = 1 + binary_tree_height_balance(tree->right);

	return (heaight_left - height_right);
}
