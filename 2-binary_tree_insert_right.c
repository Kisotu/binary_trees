#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts node as right-child of another node
 * @parent: pointer to node to insert right-child in
 * @value: value to store in new node
 * Description: new node takes place of existing right-child
 * and the old right-child is set as right-child of new node
 * Return: pointer to created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;
	parent->right = new_node;
	if (new_node->right)
		new_node->right->parent = new_node;

	return (new_node);
}
