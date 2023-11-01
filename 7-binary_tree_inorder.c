#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - Perform in-order traversal
 * @tree: Pointer to the root node
 * @func: Pointer to a function
 * Return: No return.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
