#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if bin tree is full
 * @tree:  pointer to tree to check
 * Return:  1 if full, 0 if Not full or NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->right && tree->left)
	{
		return (binary_tree_is_full(tree->right) &&
			binary_tree_is_full(tree->left));
	}

	return (0);
}
