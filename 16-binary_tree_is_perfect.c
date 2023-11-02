#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, i;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);

	for (i = 0; i < height; i++)
	{
		if (binary_tree_is_perfect_level(tree, i) == 0)
			return (0);
	}


	return (1);
}

/**
 * binary_tree_is_perfect_level - Checks if a binary tree level is perfect
 * @tree: Pointer to the root node of the tree
 * @level: Level to check
 * Return: 1 if the level is perfect, 0 otherwise
 */

int binary_tree_is_perfect_level(const binary_tree_t *tree, size_t level)
{
	if (tree == NULL)
		return (0);

	if (level == 0)
		return (1);

	return (binary_tree_is_perfect_level(tree->left, level - 1) &&
			binary_tree_is_perfect_level(tree->right, level - 1));
}
