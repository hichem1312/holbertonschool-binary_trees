#include "binary_trees.h"
/**
 * binary_tree_height - tree hight
 * @tree: a pointer
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_i = 0;
	size_t height_j = 0;

	if (tree != NULL)
	{
	height_i = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_j = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	}
	return (height_i > height_j ? height_i : height_j);
}
/**
 * binary_tree_balance - balance tree
 * @tree: a pointer
 * Return: value
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right))
		return (-1 - binary_tree_height(tree->right));
	if ((tree->left) && (tree->right == NULL))
		return (1 + binary_tree_height(tree->right));
	else
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * binary_tree_is_full - test is the tree is full or not
 * @tree: a pointer
 * Return: value
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	return (binary_tree_is_full(tree->left) - binary_tree_is_full(tree->right)
	 == 0 ? 1 : 0);
}
/**
 * binary_tree_is_perfect - test is the tree is perfect or not
 * @tree: a pointer
 * Return: value
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	return (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0
	? 1 : 0);
}
