#include "binary_trees.h"

/**
 * binary_tree_inorder - goes thru bin tree using in-order traversal
 * @tree: tree to be traversed
 * @func: pointer to function to be called for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
}