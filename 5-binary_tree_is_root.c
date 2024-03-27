#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is the root
 * @node: node to be checked
 * Return: 1 if root, 0 if not root or NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
