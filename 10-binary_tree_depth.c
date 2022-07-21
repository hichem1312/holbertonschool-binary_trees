#include "binary_trees.h"

/**
 * binary_tree_depth - count the depth
 * @tree: node
 * Return: the depth
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
