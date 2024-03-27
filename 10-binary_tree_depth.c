#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of node in bin tree
 * @tree: pointer to node to be measured
 * Return: depth, 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deep;

	deep = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		deep++;
		tree = tree->parent;
	}

	return (deep);
}
