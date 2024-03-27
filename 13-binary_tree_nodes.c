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

/**
 * binary_tree_leaves - counts leaves in abin tree
 * @tree: bin tree to count leaves
 * Return: leaves number, 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}

/**
 * binary_tree_size - measures size of bin tree
 * @tree: bin tree for size to be measured
 * Return: size, 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1);
}
