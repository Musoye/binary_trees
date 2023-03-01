#include "binary_trees.h"

/**
 * binary_tree_size - binary tree size
 * @tree; the pointer to the node
 * Return: size, tree null 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
