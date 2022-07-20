#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is a root
 * @node: node to check
 * Return: 0 (node is not a root) 1 (node is a root)
 **/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	else
		return (0);
}
