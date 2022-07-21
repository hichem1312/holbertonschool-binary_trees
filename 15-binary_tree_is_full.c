#include "binary_trees.h"
/**
 * binary_tree_is_full - test if the tree is full or not
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
