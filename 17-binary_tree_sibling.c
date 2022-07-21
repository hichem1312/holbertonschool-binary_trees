#include "binary_trees.h"
/**
 * binary_tree_sibling - s
 * @node: pointer
 * Return: value
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if ((node == NULL) || (node->parent == NULL) ||
	(!node->parent->left) || (!node->parent->right))
		return (0);
	return (node->parent->left != node ?
	 node->parent->left : node->parent->right);
}
