#include "binary_trees.h"
/**
 * binary_trees_ancestor - locate the lowest minimum ancestor
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: the pointer to the L.M.A
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *a, *b;

	if (!first || !second)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}
	a = first->parent;
	b = second->parent;
	while (a != NULL || b != NULL)
	{
		if (a == b)
		{
			return (a);
		}
		a = first->parent;
		b = second->parent;
	}
	return (NULL);
}
