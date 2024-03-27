#include "binary_trees.h"

/**
 * binary_tree_postorder - goes thru bin tree using postorder traversal
 * @tree: bin tree to traverse
 * @func: pointer to func to call for nodes
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	func(tree->n);
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
}
