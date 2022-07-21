#include "binary_trees.h"

/**
 * binary_tree_height - the height of a tree
 * @tree: a pionter
 * Return: height
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

	if (!tree)
		return (0);
	i = binary_tree_height(tree->left);
	j = binary_tree_height(tree->right);

	if (i >= j)
		return (i + 1);

	return (j + 1);
}

/**
 * binary_tree_balance - count the balance factor of a tree
 * @tree: pointer
 * Return: value
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_i, height_j;

	if (!tree)
		return (0);

	height_i = binary_tree_height(tree->left);
	height_j = binary_tree_height(tree->right);

	return (height_i - height_j);
}
