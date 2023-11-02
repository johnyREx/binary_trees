#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Perform post order traversal
 * @tree: Pointer to the root
 * @func: Pointer to a function
 * Return: no return
 */


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
