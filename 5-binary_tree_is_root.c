#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks is the node is a root
 * @node: Pointer to be checked
 * Return: 1 is root or ) if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL);
}
