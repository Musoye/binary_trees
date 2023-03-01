#include "binary_trees.h"

/**
 * binary_tree_preorder - pre order trasversal
 * @tree: the root node
 * @func: the function to implement on value of each node
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
