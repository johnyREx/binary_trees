#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node
 * @node: Pointer to the node
 * Return: Pointer to the sibling, NULL if no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}

