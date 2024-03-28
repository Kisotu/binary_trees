#include "binary_trees.h"

/**
 * binary_tree_uncle  - finds the uncle of a node
 * @node: pointer to node to find uncle
 * Return: pointer to uncle, NULL otherwise
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - finds sibling of node
 * @node: pointer to node to find sibl
 * Return: pointer to sibling, Null otherwise
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}
