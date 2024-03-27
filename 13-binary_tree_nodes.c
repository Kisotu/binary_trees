#include "binary_trees.h"

/**
 * binary_tree_nodes - coutns nodesthat have at least 1 child node
 * @tree: bin tree to count nodes
 * Return: nodes count, 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->right && !tree->left))
	{
		return (0);
	}

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
