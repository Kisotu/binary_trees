#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in abin tree
 * @tree: bin tree to count leaves
 * Return: leaves number, 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
