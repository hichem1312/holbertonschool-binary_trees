#include "binary_trees.h"

/**
 * binary_tree_height - binary tree height
 * @tree: node to get height from
 * Return: height
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

	if (tree == NULL || (!tree->right && !tree->left))
		return (0);
	i = binary_tree_height(tree->left);
	j = binary_tree_height(tree->right);

	if (i >= j)
		return (i + 1);

	return (j + 1);
}
