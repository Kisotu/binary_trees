#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if node is a leaf
 * @node: pointer to node to be checked
 * Return: 1 if leaf, 0 if otherwise or NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
