#include "binary_trees.h"

/**
 * binary_tree_delete - deletes entire binary tree
 * @tree: pointer to root node of tree to del
 * Description: if NULL, nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
