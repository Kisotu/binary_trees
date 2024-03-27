#include "binary_trees.h"

/**
 * bin_tree_bal_ht - measures height of bin tree of balanced tree
 * @tree: bin tree to measure
 * Return: height, 0 if NULL
 */

size_t bin_tree_bal_ht(const binary_tree_t *tree)
{
	size_t rt = 0, lf = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			rt = tree->right ? 1 + bin_tree_bal_ht(tree->right) : 1;
			lf = tree->left ? 1 + bin_tree_bal_ht(tree->left) : 1;
		}
		return ((lf > rt) ? lf : rt);
	}
}

/**
 * binary_tree_balance - measures bal factor of bin tree
 * @tree: tree to go thru
 * Return: bal factor, 0 if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int total = rt = lf = 0;

	if (tree)
	{
		rt = ((int)bin_tree_bal_ht(tree->right));
		lf = ((int)bin_tree_bal_ht(tree->left));
		total  = lf - rt;
	}

	return (total);
}
