#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: pointer to tree to check
 * Return: perfect? 0 if NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t ht, nods, pow;

	ht = nods = pow = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	nods = binary_tree_size(tree);
	ht = bianry_tree_height(tree);

	pow = (size_t)exponent(2, ht + 1);

	return (pow - 1 == nods);
}

/**
 * binary_tree_size - measures size of bin tree
 * @tree: tree to measure
 * Return: size, 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - measures height of bin tree
 * @tree: tree to measure
 * Return: height, 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_ht, left_ht;

	right_ht = left_ht = 0;
	if (!tree)
		return (0);

	right_ht = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	left_ht = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_ht > right_ht ? left_ht : right_ht);
}

/**
 *exponent - returns exponent of a
 *@a: value to exponentiate
 *@b: power to raise x to
 *Return: a to power of b, -1 if y is negative
 */

int exponent(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	else
		return (a * exponent(a, b - 1));

}
