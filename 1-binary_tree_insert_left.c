#include <stdlib.h>
#inlcude "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node a the left child of another node
 * @parent: Pointer to the parent node
 * @value: Value to save in new node
 * Return: Pointer to the new node created, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
