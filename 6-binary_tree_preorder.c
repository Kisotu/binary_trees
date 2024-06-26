#include "binary_trees.h"

/**
 * binary_tree_preorder - goes thru the bin tree using preorder traversal
 * @tree: the bin tree to traverse
 * @func: pointer to func called for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
