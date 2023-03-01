#include "binary_trees.h"

/**
 * binary_tree_insert: insert node at left
 * @parent: the parent node
 * @value: the value stored in the new node
 * Return : pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if(parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
