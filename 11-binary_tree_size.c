#include "binary_trees.h"

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
