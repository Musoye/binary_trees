#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create new binary node
 * @parent: the pointer to parent node to create
 * @value : the value to assign
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *born = malloc(sizeof(binary_tree_t));

	if (born == NULL)
	{
		return (NULL);
	}
	born->n = value;
	born->parent = parent;
	born->left = NULL;
	born->right = NULL;
	return (born);
}
