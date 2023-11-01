#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Perform Pre-order traversal 
 * @tree: Pointer to the root
 * #func: Poinyter to a function 
 * Return: No return
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
