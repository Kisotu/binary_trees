#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts child node to left side of another node
 * @parent: pointer to parent node to insert child on the left
 * @value: value to store in new node
 * Description: if parent has left-child, new node takes its place
 * and the old left-child becomes new left-child of new node
 * Return: pointer to ndoe created
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = parent->left;
	parent->left = new_node;
	if (new_node->left)
		new_node->left->parent = new_node;

	return (new_node);
}
