#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: Pointer to the sibling node, or NULL if no sibling or node is NULL
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


/**
 * binary_tree_uncle - Find the uncle
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node, NULL if no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
