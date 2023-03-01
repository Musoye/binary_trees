#include "binary_trees.h"

/**
 * binary_tree_leaves - calculate the binary leaves
 * @tree: the pointer to the node
 * Return: no. of leaves and NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
